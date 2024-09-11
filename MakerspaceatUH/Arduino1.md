---
layout: default
---

# Arduino Workshop 1

## Table of contents
{:toc}


## Objectives
 * Understand the power of the Arduino
 *  Recognize the difference between:
    *  Input vs. Output
    *  Analog vs. Digital
 * Communicate with the Arduino using IDE
 * Build and upload a simple “sketch”
 * Control an external LED using the Arduino 


## What is this Arduino Thing?

 The **Arduino** is a small microcontroller (simple computer) used to build digital devices and interactive objects that can sense and control objects in the physical world.

 The Arduino® Organization is a corporation focused around designing and supporting open source electronics and digital technologies ([see their mission statement](https://www.arduino.cc/en/about)). Arduino files the Uno and a majority of their design processes under the [Attribution-Sharealike Open Source License](https://creativecommons.org/licenses/by-sa/3.0/legalcode), meaning they took all of their secrets behind the designs public. Their design, internals, manufacturing, and software is [free for everyone](https://support.arduino.cc/hc/en-us/articles/4415094490770-Licensing-for-products-based-on-Arduino) to observe, learn, and play with. Arduino [*S.A.*](https://en.wikipedia.org/wiki/S.A._(corporation)) are [registered in the EU](https://store.arduino.cc/pages/transparency), headquartered in Monza, Italy.

![Arduino Boards]()

  The Arduino family is a board design. There are almost a hundred different Arduinos, each with their separate nuances. Here are the most common types. 

  * [Uno]() - Standard version designed by Arduino.
  * [Micro & Nano]() – small but same power.
  * [Mega]() – Five times the power and double the size.
  * [Mini]() – So small it doesn’t have a USB slot.

> Addendum - **Arduino based PLCs** <details>
Arduino has now added their own line of industrial grade controllers, notably the [Opta](https://store.arduino.cc/collections/pro-family) Micro-Programmable Logic Controllers (PLCs). PLCs are commonly used industry tools known for their reliability and fault tolerance, and make up everything from street light controls, to oil and gas control plants, and even space systems like rocket engine controllers. There are institutional educational resources on learning more about PLCs. </details>

![Arduino Derivatives]()

  Arduino has had many branches and derivatives, designed to either fill a niche or improve the Arduino in a certain factor. They are traditionally compatible with the Arduino programming ecosystem, meaning they run the same software and are usually compatible.

  * [Teensy]() – Arduino Nano, but is faster and designed for data gathering and computation.
  * [Flora and Gemma]() – Designed to be Sewable in clothes and fabric.
  * [LaunchPAD]() – Designed by Texas Instruments for TI's architecture and chipsets.
  * [ESP32 family]() – Arduino-like platform designed with Wifi built in to the syste,.
  * [STM32 EDU Boards]() - Designed by ST Microelectronics to create common adaptability with STM32 chipsets.

![System on a Chip (SOC)]()

 System on a Chip (SOC) is a kind of board that is designed less like a code execution machine, and more like a computer. Instead of a single instruction microprocessor (like the Arduino, which is a RISC platform), SOCs can do parallel computing and a lot more, including having an Operating System like Windows, Android, Linux, and Android. SOCs offer better capability but significant complexity than the Arduino, requiring much more design and institutional knowledge. Common SOC boards include - 

 * Raspberry Pi - based on BroadCOM ARM - 
 * Nvida Jetson - Based on Nvidia TEGRA - 
 * There are many, many more we just don't have time to cover. See Addendums.



> Addendum - <details closed> <summary> **System on a Chip (SOC).**  </summary>
 >
 > This section will cover some basics about SOCs, and the attached Powerpoint will include a little more, but SOCs are evolving so quickly in terms of capability and power that the best way to learn about them is through a univeristy or through experience. We cover the Raspberry Pi, a common SOC board in a different presentation, but that's about all I was reasonablly funded to cover. There are institutional educational resources on learning more about SOCs. </details>


> Addendum - <details closed> <summary> **The SOC Gambit and Arduino in the AI world.** </summary>
 > 
 > In the last 10+ years, the rise SOCs have changed the nature of embedded electronics. SOCs of 5 years ago are the core of your cell phone's hardware, and today SOCs can run Artifical Intelligence, Machine Vision, and Edge Computing so much better than Arduinos and Arduino derivatives can. Many of you have probably heard of ARM® because of Apple INC's investment in the ARM M1®, but you may also remember Qualcomm®'s Snapdragon® which powered recent iPhones and Android Devices. FPGA boards, which I lumped under SOCs for the sake of introducing them, are also becoming more prevelant for their ability to rapidly compute machine learning and AI tasks. There are international debates across the US, Europe, and Asia discussing whether the future of education in microprocessors should start with a SOC/ARM architecture, FPGA architecture, or a Single-Instruction/Arduino like comptuer design. There are institutional educational resources on learning more about this debate. </details>

### TLDR - There is an Arduino or Arduino Derivative for any application where you need a computer to interface with the real world.

> Note - <details closed> <summary> **Is the Arduino the best solution?** </summary>
 >
 > AAAAAAAAAAAAAA</details>

## How the Arduino interfaces with the World

![Arduino Shields]()

> Addendum - <details closed> <summary> **Replacing Shields** </summary>
 > 
 >In modern microprocessor engineering, Modules are the way things are done now period. This is because the amount of microprocessors, SOCs, and other things have become too prevalent. There are too many to make Arduino only shields, and the Arduino comes in too many sizes. If you are a company making a sensor, it is easier for you to make a module that people can try to learn how to connect to their design, rather than make a custom Arduino-based Shield or board. From 2018 to present, the number of modules available have increased nearly 10 fold, while the number of Uno-based shields has not changed. There are institutional educational resources on learning more.</details>

![Arduino Modules]()

### TLDR - There is also always a sensor that can interface with the Arduino or other chip for your mission or application.
You can find out more about Sensing the world with Arduinos or other chipsets in Workshops 3 and 5.

> Note - <details closed> <summary> **What if there isn't?** </summary>
 >
 > This rarely happens, most recently with Pulse Sensors. The ability to measure your pulse in real time became the subject of multiple research papers and documents, but eventually the first companies who developed those sensors for the commercial market are making millions in sales from selling embeded EKGs and ECGs to Apple, Samsung, Fitbit, and other smart watch manufacturers. TLDR: If you find a sensor application that doesn't have a module yet, make one and sell it at $200/unit, I expect royalties lmfao. </details>

## How the Arduino Works?

> Addendum - <details closed> <summary> **System Architecture** </summary>
>
> There are institutional educational resources on learning more.</details>


> Addendum - <details closed> <summary> **Making your own Arduino & PCB Design** </summary>
>
> 
> There are institutional educational resources on learning more.</details>

## IO and Digital/Analog

## The Arduino IDE

> Addendum - <details closed> <summary> **Arduino IDE 1 vs IDE 2** </summary>
>
> 
> There are institutional educational resources on learning more.</details>

## Cool Arduino-based Projects

> Addendum - <details closed> <summary> **How do I get good?** </summary>
>
> 
> There are institutional educational resources on learning more.</details>

# Workshop 1

## Install the Arduino IDE

## Lab 1 - Blink LED

```c++
void setup() {
  // put your setup code here, to run once:
}
```

```c++
void loop() {
  // put your main code here, to run repeatedly:
}
```

```c++
pinMode(#, INPUT/OUTPUT); // where # is your Pin number, INPUT selects it to READ data, while OUTPUT sets it to write.
```

```c++
digitalWrite(#, 0); // outputs to that pin with 0 (no power)

digitalWrite(#, 1); // outputs to that pin with 1 (full power)
```

```c++
delay(time); //adds a timed delay to a function
```
## Lab 2 - Multi blink LED

## Challenge 1 - Traffic Light


> Addendum - <details closed> <summary> **What are these Addendums?** </summary>
> Addendums are used in these tutorials as Find Out More links for Engineers and engineering enthusiasts. Addendums were added in 2023 by request of professors to reference and introduce a university engineering course and the importance of that course from these fundemental basics. Due to conflict with the University, the course numbers and other referencing information have been scrubbed, but the information is still highly relevant to the topic and are left there for those who are curious on a subject. Basically, if you see an addendum, there's a university course that can cover this better than this tutorial. If you see an addendum and wish to learn more, seek a qualified university engineering or CS department. </details>
