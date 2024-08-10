<script setup lang="ts">

import './aside.scss';
import {items} from './items.ts';
</script>
<template>
  <div class="nav">
    <ol>
      <li v-for="item in items" :key="item"><a>{{ item }}</a></li><!--Here, it passes the iterable part-->
    </ol>
  </div>
</template>