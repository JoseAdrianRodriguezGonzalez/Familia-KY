<script setup lang="ts" >
import './grid.scss';
import{items,link} from '../library/items.ts';
const  getImageUrl = (item: string) => {
    return new URL(`${link}${item}.webp`, import.meta.url).href;
  };
</script>
<template>
    <section class="catalogue">
        <div  v-for="item in items" :key="item" :class="item">
            <img :src="getImageUrl(item)" alt="">
            <span>
                {{item}}
            </span>
        </div>
    </section>
</template>