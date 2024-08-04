<script setup lang="ts">
import { ref } from 'vue'
import Aside from './../library/Aside.vue'
import  './Main.scss'
import Grid from './grid.vue';
</script>
<template>
    <main>
       <Aside></Aside>
        <div class="main-code">
            <h1>KY-sensors</h1>
            <section>
            <h2>Welcome!</h2>
            <p>Welcome to the KY-SENSORS!. A family of sensors that are widely used on different type of microcontrollers.
            Here it be showed some arduino code that are simple examples of use. But also it will be added some examples at different languages to their respective Microcontrollers. As will be added some simple examples of code that implies just reading the values of the sensors or writing these values at the terminal,however will be useful to know some features of the sensors to take in mind when you are going to create a real project. 
            So, as it'll be presented and explained some of the main features, schematics, besides it'll be presented a link to the official Datasheet or a link that you can download the PDF.
            Otherwise, you might see some ideas that you could use some of these sensors on each page, so you could take some inspiration to make one of them or improve the idea with you perspective.
            </p>
            <h2>Guide to the website</h2>
            <p>If you have some difficulties to understand the usage of the website you can read this part of the main page.
                The index will be always at the left-side, so you can choose the sensor's number that you are looking for and have it always at your hand.
                At the end of this page, you will find a footer that will be the link of my github, and you can also check some interesting projects that are in a sort of way, related with this one.
                This is the first step of the project, I'd be charmed to add more sensors and explaining more interesting topics of microcontrolles taht can be useuful for everyone
            </p>
            <h2>Sensors</h2>
            <p>You can look here a brief description for each sensors, as also will be the images of each one</p>
        </section>
            <Grid></Grid>
        </div>
        
    </main>
</template>