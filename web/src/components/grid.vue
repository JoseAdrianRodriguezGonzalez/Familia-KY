<script setup lang="ts" >
import './grid.scss';

import items from '../library/items.ts';
</script>
<template>
    <section class="catalogue">
        <div  v-for="item in items" :key="item" :class="item">
            <img src="" alt="">
            <span>
                {{item}}
            </span>
        </div>
    </section>
</template>