<script setup lang="ts" >
import './grid.scss';
import{items,link} from '../library/items.ts';

  const correctUrl=(item:string)=>{
    const isDeploy = process.env.NODE_ENV === 'production'; // Detecta si estás en producción
    if (isDeploy) {
      // URL para entorno de despliegue
      console.log(item);
      return `${link}${item}.webp`;
    } else {
      // URL para entorno local
       // Ajusta según tu configuración local
      return new URL(`${link}${item}.webp`, import.meta.url).href;
    }
  }
</script>
<template>
    <section class="catalogue">
        <div  v-for="item in items" :key="item" :class="item">
            <img :src="`${correctUrl(item)}`" alt="">
            <span>
                {{item}}
            </span>
        </div>
    </section>
</template>