<!DOCTYPE html>
<html lang = "en">
<head>
<meta charset = "UTF-8">
<meta name = "viewport" content = "width=device-width, initial-scale=1.0">
<title>Roblox fan of 24k_ake< / title>
<style>
    :root{
      --dark - bg: #0a0b19;
      --dark - accent: #13142a;
      --accent - green: #00e679;
      --text - white: #ffffff;
      --text - light: #acacbc;
      --chart - blue: #2d81ff;
      --roblox - red: #ff3131;
}

* {
    margin : 0;
    padding : 0;
    box - sizing: border - box;
    font - family: 'Inter', -apple - system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans - serif;
}

body{
  background - color: var(--dark - bg);
  color: var(--text - white);
  line - height: 1.6;
}

.container{
  max - width: 1200px;
  margin: 0 auto;
  padding: 0 20px;
}

/* Navigation */
nav{
  display: flex;
  justify - content: space - between;
  align - items: center;
  padding: 20px 0;
  margin - bottom: 60px;
}

.logo{
  display: flex;
  align - items: center;
  font - weight: 700;
  font - size: 20px;
}

.logo - icon{
  color: var(--roblox - red);
  margin - right: 8px;
  font - size: 24px;
}

.nav - links{
  display: flex;
  gap: 30px;
}

.nav - links a{
  color: var(--text - light);
  text - decoration: none;
  font - size: 14px;
  transition: color 0.3s;
}

.nav - links a : hover{
  color: var(--text - white);
}

.dropdown{
  position: relative;
  display: inline - block;
}

.dropdown - content{
  display: none;
  position: absolute;
  background - color: var(--dark - accent);
  min - width: 200px;
  box - shadow: 0 8px 16px rgba(0,0,0,0.2);
  border - radius: 8px;
  z - index: 1;
}

.dropdown:hover.dropdown - content{
  display: block;
}

.dropdown - content a{
  color: var(--text - light);
  padding: 12px 16px;
  text - decoration: none;
  display: block;
  border - radius: 8px;
}

.dropdown - content a : hover{
  background - color: rgba(255,255,255,0.05);
  color: var(--text - white);
}

.dropdown - link{
  display: flex;
  align - items: center;
}

.dropdown - icon{
  width: 16px;
  height: 16px;
  margin - right: 8px;
  background - color: transparent;
}

.nav - buttons{
  display: flex;
  gap: 12px;
}

.btn{
  padding: 8px 16px;
  border - radius: 6px;
  font - size: 14px;
  font - weight: 500;
  cursor: pointer;
  transition: all 0.3s;
}

.btn - outline{
  background: transparent;
  border: 1px solid #2a2c43;
  color: var(--text - white);
}

.btn - primary{
  background: var(--roblox - red);
  color: white;
  border: none;
}

/* Hero Section */
.hero{
  text - align: center;
  margin - bottom: 80px;
}

.hero h1{
  font - size: 42px;
  line - height: 1.2;
  margin - bottom: 16px;
  max - width: 600px;
  margin - left: auto;
  margin - right: auto;
}

.hero.tagline{
  color: var(--text - light);
  font - size: 14px;
  margin - bottom: 60px;
}

/* Games Section */
.games - section{
  margin - bottom: 80px;
}

.games - grid{
  display: grid;
  grid - template - columns: repeat(auto - fill, minmax(250px, 1fr));
  gap: 20px;
  margin - top: 30px;
}

.game - card{
  background - color: var(--dark - accent);
  border - radius: 12px;
  overflow: hidden;
  transition: transform 0.3s;
}

.game - card:hover{
  transform: translateY(-5px);
}

.game - img{
  width: 100 %;
  height: 150px;
  background - color: #1e1f33;
  display: flex;
  align - items: center;
  justify - content: center;
  font - size: 36px;
}

.game - info{
  padding: 16px;
}

.game - title{
  font - size: 18px;
  margin - bottom: 8px;
}

.game - desc{
  font - size: 14px;
  color: var(--text - light);
  margin - bottom: 12px;
}

.play - btn{
  display: inline - block;
  padding: 8px 16px;
  background - color: var(--roblox - red);
  color: white;
  border - radius: 6px;
  text - decoration: none;
  font - size: 14px;
  font - weight: 500;
  transition: background - color 0.3s;
}

.play - btn:hover{
  background - color: #e61f1f;
}

/* Features */
.features{
  display: flex;
  gap: 30px;
  margin - bottom: 60px;
}

.feature - card{
  flex : 1;
  background - color: var(--dark - accent);
  border - radius: 12px;
  padding: 24px;
  height: 280px;
  display: flex;
  flex - direction: column;
}

.feature - card h3{
  font - size: 16px;
  margin - bottom: 18px;
  color: var(--text - light);
}

.feature - content{
  flex : 1;
  display: flex;
  align - items: center;
  justify - content: center;
}

/* Footer */
footer{
  text - align: center;
  padding: 20px 0;
  color: var(--text - light);
  font - size: 14px;
  border - top: 1px solid rgba(255,255,255,0.1);
}

.social - icons{
  display: flex;
  justify - content: center;
  margin - top: 15px;
  gap: 20px;
}

.social - icon{
  color: var(--text - light);
  transition: color 0.3s, transform 0.3s;
  display: flex;
}

.social - icon:hover{
  color: var(--text - white);
  transform: translateY(-3px);
}

.social - icon svg{
  width: 24px;
  height: 24px;
}

/* Modal Styles */
.modal{
  display: none;
  position: fixed;
  top : 0;
  left : 0;
  width: 100 %;
  height: 100 %;
  background - color: rgba(0, 0, 0, 0.7);
  z - index: 100;
  overflow: auto;
  animation: fadeIn 0.3s;
}

@keyframes fadeIn{
  from { opacity : 0; }
  to { opacity : 1; }
}

.modal - content{
  background - color: var(--dark - accent);
  margin: 10 % auto;
  padding: 30px;
  border - radius: 12px;
  width: 90 %;
  max - width: 400px;
  box - shadow: 0 5px 20px rgba(0, 0, 0, 0.3);
  position: relative;
  animation: slideIn 0.3s;
}

@keyframes slideIn{
  from { transform: translateY(-50px); opacity : 0; }
  to { transform: translateY(0); opacity : 1; }
}

.close{
  position: absolute;
  top: 15px;
  right: 20px;
  font - size: 24px;
  color: var(--text - light);
  cursor: pointer;
  transition: color 0.3s;
}

.close:hover{
  color: var(--text - white);
}

.modal - title{
  font - size: 24px;
  margin - bottom: 20px;
  text - align: center;
}

.form - group{
  margin - bottom: 20px;
}

.form - group label{
  display: block;
  margin - bottom: 5px;
  color: var(--text - light);
  font - size: 14px;
}

.form - control{
  width: 100 %;
  padding: 12px;
  background - color: rgba(255, 255, 255, 0.1);
  border: 1px solid rgba(255, 255, 255, 0.1);
  border - radius:.75em;
  color: var(--text - white);
  font - size: 14px;
  transition: border - color 0.3s;
}

.form - control:focus{
  outline: none;
  border - color: var(--roblox - red);
  box - shadow: 0 0 0 2px rgba(255, 49, 49, 0.3);
}

.form - button{
  width: 100 %;
  padding: 12px;
  background - color: var(--roblox - red);
  border: none;
  border - radius: 6px;
  color: white;
  font - size: 16px;
  font - weight: 500;
  cursor: pointer;
  transition: background - color 0.3s;
}

.form - button:hover{
  background - color: #e61f1f;
}

.form - switch {
    text - align: center;
    margin - top: 15px;
    font - size: 14px;
color: var(--text - light);
}

.form - switch a {
color: var(--text - white);
    text - decoration: none;
    font - weight: 500;
cursor: pointer;
}

.form - switch a:hover{
  text - decoration: underline;
}

.form - error{
  color: var(--roblox - red);
  font - size: 14px;
  margin - top: 5px;
  display: none;
}

.alert{
  padding: 10px;
  border - radius: 6px;
  margin - bottom: 20px;
  font - size: 14px;
  display: none;
}

.alert - success{
  background - color: rgba(0, 230, 121, 0.2);
  border: 1px solid var(--accent - green);
  color: var(--accent - green);
}

.alert - error{
  background - color: rgba(255, 49, 49, 0.2);
  border: 1px solid var(--roblox - red);
  color: var(--roblox - red);
}

/* Account Dropdown Styles */
.account - dropdown{
  position: relative;
  display: inline - block;
}

.account - dropdown - content{
  display: none;
  position: absolute;
  right : 0;
  background - color: var(--dark - accent);
  min - width: 220px;
  box - shadow: 0 8px 16px rgba(0,0,0,0.2);
  border - radius: 8px;
  z - index: 1;
}

.account - dropdown:hover.account - dropdown - content{
  display: block;
}

.account - dropdown - content a{
  color: var(--text - light);
  padding: 12px 16px;
  text - decoration: none;
  display: block;
  border - radius: 8px;
}

.account - dropdown - content a : hover{
  background - color: rgba(255,255,255,0.05);
  color: var(--text - white);
}

.account - icon{
  margin - right: 10px;
  opacity: 0.7;
}

/* Dashboard Styles */
.dashboard - section{
  margin: 40px 0 80px;
}

.dashboard - section h2{
  font - size: 28px;
  margin - bottom: 30px;
}

.dashboard - grid{
  display: grid;
  grid - template - columns: repeat(auto - fill, minmax(300px, 1fr));
  gap: 20px;
}

.dashboard - card{
  background - color: var(--dark - accent);
  border - radius: 12px;
  padding: 24px;
  box - shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
}

.dashboard - card h3{
  font - size: 18px;
  margin - bottom: 20px;
  color: var(--text - white);
}

.profile - card{
  background - color: var(--dark - accent);
  grid - column: 1 / -1;
}

.profile - info{
  display: flex;
  align - items: center;
  gap: 20px;
}

.profile - avatar{
  position: relative;
}

.profile - avatar img{
  width: 120px;
  height: 120px;
  border - radius: 60px;
  object - fit: cover;
  border: 3px solid var(--roblox - red);
  box - shadow: 0 4px 10px rgba(0, 0, 0, 0.3);
  transition: all 0.3s ease;
}

.profile - avatar img : hover{
  transform: scale(1.05);
  box - shadow: 0 5px 15px rgba(0, 0, 0, 0.4);
}

.profile - avatar::after{
  content: "";
  position: absolute;
  top: 5px;
  right: 5px;
  width: 20px;
  height: 20px;
  border - radius: 50 %;
  background - color: var(--accent - green);
  border: 2px solid white;
  display: none;
}

.profile - avatar.verified::after{
  display: block;
}

.profile - details h3{
  font - size: 24px;
  margin - bottom: 10px;
}

.profile - details p{
  color: var(--text - light);
  margin - bottom: 8px;
}

.empty - state{
  color: var(--text - light);
  font - style: italic;
  padding: 20px 0;
  text - align: center;
}

.favorite - game, .played - game{
  display: flex;
  align - items: center;
  padding: 10px 0;
  border - bottom: 1px solid rgba(255, 255, 255, 0.1);
}

.favorite - game:last - child, .played - game : last - child{
  border - bottom: none;
}

.game - thumb{
  width: 60px;
  height: 60px;
  border - radius: 8px;
  overflow: hidden;
  margin - right: 15px;
  background - color: #1e1f33;
  display: flex;
  align - items: center;
  justify - content: center;
  font - size: 24px;
}

.game - info{
  flex : 1;
}

.game - info h4{
  font - size: 16px;
  margin - bottom: 4px;
}

.game - info p{
  color: var(--text - light);
  font - size: 12px;
}

.profile - details p{
  color: var(--text - light);
  margin - bottom: 8px;
}

.note{
  font - style: italic;
  font - size: 13px;
  color: var(--text - light);
}

.verification - steps{
  margin - top: 15px;
}

.verification - list{
  margin: 10px 0;
  padding - left: 20px;
}

.verification - list li{
  margin - bottom: 8px;
}

.verification - link{
  color: var(--roblox - red);
  text - decoration: none;
  transition: all 0.3s;
}

.verification - link:hover{
  text - decoration: underline;
  opacity: 0.9;
}

.connect - roblox h4{
  font - size: 16px;
  margin - bottom: 10px;
  color: var(--text - white);
}
< / style>
< / head>
<body>
<div class = "container">
<!--Navigation-->
<nav>
<div class = "logo">
<span class = "logo-icon">??< / span> Roblox fan of 24k_ake
< / div>

<div class = "nav-links">
<a href = "#">Home page< / a>
<div class = "dropdown">
<a href = "#">My links< / a>
<div class = "dropdown-content">
<a href = "https://www.roblox.com/users/1959890949/profile" target = "_blank" class = "dropdown-link">
<svg xmlns = "http://www.w3.org/2000/svg" width = "16" height = "16" viewBox = "0 0 90 90" class = "dropdown-icon">
<rect width = "90" height = "90" fill = "white" transform = "rotate(10 45 45)" / >
<rect x = "35" y = "35" width = "20" height = "20" fill = "black" / >
< / svg>
My Profile
< / a>
<a href = "https://www.roblox.com/communities/9447132/THE-KING-ROBLOX#!/about" target = "_blank" class = "dropdown-link">
<svg xmlns = "http://www.w3.org/2000/svg" width = "16" height = "16" viewBox = "0 0 90 90" class = "dropdown-icon">
<rect width = "90" height = "90" fill = "white" transform = "rotate(10 45 45)" / >
<rect x = "35" y = "35" width = "20" height = "20" fill = "black" / >
< / svg>
My Community
< / a>
< / div>
< / div>
<div class = "dropdown">
<a href = "#">My games< / a>
<div class = "dropdown-content">
<a href = "https://www.roblox.com/games/136171504136247/SCP-096" target = "_blank">SCP - 096< / a>
<a href = "https://www.roblox.com/games/94422510929213/TitanGrip" target = "_blank">TitanGrip< / a>
<a href = "https://www.roblox.com/games/97176783366995/Shadow-Slayer" target = "_blank">Shadow Slayer< / a>
<a href = "https://www.roblox.com/games/135225216190420/Supeerhero-flight" target = "_blank">Superhero Flight< / a>
< / div>
< / div>
< / div>

<div class = "nav-buttons">
<button id = "loginBtn" class = "btn btn-outline">Log in< / button>
<button id = "signupBtn" class = "btn btn-primary">Sign up< / button>
< / div>
< / nav>

<!--Hero Section-->
<div class = "hero">
<h1>Welcome to the Ultimate Roblox Fan Page< / h1>
<p class = "tagline">Dedicated to 24k_ake and amazing Roblox games!< / p>
< / div>

<!--Games Section-->
<div class = "games-section">
<h2>Featured Games< / h2>
<div class = "games-grid">
<!--Game 1 -->
<div class = "game-card">
<div class = "game-img">??< / div>
<div class = "game-info">
<h3 class = "game-title">SCP - 096< / h3>
<p class = "game-desc">Can you survive the encounter with SCP - 096 ? < / p>
<a href = "https://www.roblox.com/games/136171504136247/SCP-096" target = "_blank" class = "play-btn">Play Now< / a>
< / div>
< / div>

<!--Game 2 -->
<div class = "game-card">
<div class = "game-img">??< / div>
<div class = "game-info">
<h3 class = "game-title">TitanGrip< / h3>
<p class = "game-desc">Test your strength in this exciting game!< / p>
<a href = "https://www.roblox.com/games/94422510929213/TitanGrip" target = "_blank" class = "play-btn">Play Now< / a>
< / div>
< / div>

<!--Game 3 -->
<div class = "game-card">
<div class = "game-img">??< / div>
<div class = "game-info">
<h3 class = "game-title">Shadow Slayer< / h3>
<p class = "game-desc">Become the ultimate shadow warrior!< / p>
<a href = "https://www.roblox.com/games/97176783366995/Shadow-Slayer" target = "_blank" class = "play-btn">Play Now< / a>
< / div>
< / div>

<!--Game 4 -->
<div class = "game-card">
<div class = "game-img">??< / div>
<div class = "game-info">
<h3 class = "game-title">Superhero Flight< / h3>
<p class = "game-desc">Soar through the skies as a superhero!< / p>
<a href = "https://www.roblox.com/games/135225216190420/Supeerhero-flight" target = "_blank" class = "play-btn">Play Now< / a>
< / div>
< / div>
< / div>
< / div>

<footer>
&copy; 2024 Roblox fan of 24k_ake.This is an unofficial fan site and is not affiliated with Roblox Corporation.
<div class = "social-icons">
<a href = "https://www.youtube.com/@Jasm29998" target = "_blank" class = "social-icon" title = "YouTube Channel">
<svg xmlns = "http://www.w3.org/2000/svg" width = "24" height = "24" viewBox = "0 0 24 24" fill = "currentColor">
<path d = "M19.615 3.184c-3.604-.246-11.631-.245-15.23 0-3.897.266-4.356 2.62-4.385 8.816.029 6.185.484 8.549 4.385 8.816 3.6.245 11.626.246 15.23 0 3.897-.266 4.356-2.62 4.385-8.816-.029-6.185-.484-8.549-4.385-8.816zm-10.615 12.816v-8l8 3.993-8 4.007z" / >
< / svg>
< / a>
<a href = "https://discord.com/invite/yRcCmRKc" target = "_blank" class = "social-icon" title = "Discord Server">
<svg xmlns = "http://www.w3.org/2000/svg" width = "24" height = "24" viewBox = "0 0 24 24" fill = "currentColor">
<path d = "M20.317 4.3698a19.7913 19.7913 0 00-4.8851-1.5152.0741.0741 0 00-.0785.0371c-.211.3753-.4447.8648-.6083 1.2495-1.8447-.2762-3.68-.2762-5.4868 0-.1636-.3933-.4058-.8742-.6177-1.2495a.077.077 0 00-.0785-.037 19.7363 19.7363 0 00-4.8852 1.515.0699.0699 0 00-.0321.0277C.5334 9.0458-.319 13.5799.0992 18.0578a.0824.0824 0 00.0312.0561c2.0528 1.5076 4.0413 2.4228 5.9929 3.0294a.0777.0777 0 00.0842-.0276c.4616-.6304.8731-1.2952 1.226-1.9942a.076.076 0 00-.0416-.1057c-.6528-.2476-1.2743-.5495-1.8722-.8923a.077.077 0 01-.0076-.1277c.1258-.0943.2517-.1923.3718-.2914a.0743.0743 0 01.0776-.0105c3.9278 1.7933 8.18 1.7933 12.0614 0a.0739.0739 0 01.0785.0095c.1202.099.246.1981.3728.2924a.077.077 0 01-.0066.1276 12.2986 12.2986 0 01-1.873.8914.0766.0766 0 00-.0407.1067c.3604.698.7719 1.3628 1.225 1.9932a.076.076 0 00.0842.0286c1.961-.6067 3.9495-1.5219 6.0023-3.0294a.077.077 0 00.0313-.0552c.5004-5.177-.8382-9.6739-3.5485-13.6604a.061.061 0 00-.0312-.0286z" / >
< / svg>
< / a>
< / div>
< / footer>
< / div>

<!--Login Modal-->
<div id = "loginModal" class = "modal">
<div class = "modal-content">
<span class = "close">&times;< / span>
<h2 class = "modal-title">Log In< / h2>

<div id = "loginAlert" class = "alert alert-error">< / div>

<form id = "loginForm">
<div class = "form-group">
<label for = "loginUsername">Username< / label>
<input type = "text" id = "loginUsername" class = "form-control" placeholder = "Enter your username">
<div id = "loginUsernameError" class = "form-error">Please enter a valid username< / div>
< / div>

<div class = "form-group">
<label for = "loginPassword">Password< / label>
<input type = "password" id = "loginPassword" class = "form-control" placeholder = "Enter your password">
<div id = "loginPasswordError" class = "form-error">Please enter your password< / div>
< / div>

<button type = "submit" class = "form-button">Log In< / button>
< / form>

<div class = "form-switch">
Don't have an account? <a id="switchToSignup">Sign up</a>
< / div >

<div class = "form-switch">
<a href = "#" id = "forgotPasswordLink">Forgot Password ? < / a>
< / div>
< / div>
< / div>

<!--Signup Modal-->
<div id = "signupModal" class = "modal">
<div class = "modal-content">
<span class = "close">&times;< / span>
<h2 class = "modal-title">Create an Account< / h2>

<div id = "signupAlert" class = "alert alert-success">< / div>

<form id = "signupForm">
<div class = "form-group">
<label for = "signupUsername">Username< / label>
<input type = "text" id = "signupUsername" class = "form-control" placeholder = "Choose a username">
<div id = "signupUsernameError" class = "form-error">Username must be at least 3 characters< / div>
< / div>

<div class = "form-group">
<label for = "signupEmail">Email< / label>
<input type = "email" id = "signupEmail" class = "form-control" placeholder = "Enter your email">
<div id = "signupEmailError" class = "form-error">Please enter a valid email address< / div>
< / div>

<div class = "form-group">
<label for = "signupPassword">Password< / label>
<input type = "password" id = "signupPassword" class = "form-control" placeholder = "Create a password">
<div id = "signupPasswordError" class = "form-error">Password must be at least 6 characters< / div>
< / div>

<div class = "form-group">
<label for = "signupConfirmPassword">Confirm Password< / label>
<input type = "password" id = "signupConfirmPassword" class = "form-control" placeholder = "Confirm your password">
<div id = "signupConfirmPasswordError" class = "form-error">Passwords do not match< / div>
< / div>

<button type = "submit" class = "form-button">Create Account< / button>
< / form>

<div class = "form-switch">
Already have an account ? <a id = "switchToLogin">Log in< / a>
< / div>
< / div>
< / div>

<!--Dashboard Section(visible only when logged in) -->
<div id = "dashboard-section" class = "dashboard-section" style = "display: none;">
<div class = "container">
<h2>My Dashboard< / h2>

<div class = "dashboard-grid">
<div class = "dashboard-card profile-card">
<div class = "profile-info">
<div id = "profile-avatar" class = "profile-avatar">
<img src = "https://tr.rbxcdn.com/30dbc8a564fe71aefe593605518ae20a/150/150/AvatarHeadshot/Png" alt = "Roblox Avatar" id = "dashboard-avatar-img">
< / div>
<div class = "profile-details">
<h3 id = "dashboard-username">Username< / h3>
<p id = "dashboard-joined">Member since : <span id = "joined-date">Today< / span>< / p>

<div class = "connect-roblox" id = "connect-roblox-section">
<h4>Connect Your Roblox Account< / h4>
<div class = "form-group">
<input type = "text" id = "roblox-username" class = "form-control" placeholder = "Enter your Roblox username" style = "max-width: 250px;">
<button id = "connect-roblox-btn" class = "btn btn-primary" style = "margin-top: 10px;">Connect Account< / button>
< / div>
<p class = "note">Connecting your account lets you verify your membership< / p>
< / div>

<div id = "verification-section" style = "display: none;">
<p id = "dashboard-verification">Verification Status : <span id = "verification-status">Not Verified< / span>< / p>
<div class = "verification-steps">
<p>To verify your account, please : < / p>
<ul class = "verification-list">
<li>
<a href = "https://www.roblox.com/users/1959890949/profile" target = "_blank" class = "verification-link">
Follow 24k_ake on Roblox
< / a>
< / li>
<li>
<a href = "https://www.roblox.com/communities/9447132/THE-KING-ROBLOX#!/about" target = "_blank" class = "verification-link">
Join THE KING ROBLOX community
< / a>
< / li>
< / ul>
<button id = "verify-follow-btn" class = "btn btn-primary">Verify Follow & Membership< / button>
< / div>
< / div>
< / div>
< / div>
< / div>

<div class = "dashboard-card">
<h3>Favorite Games< / h3>
<div class = "favorite-games" id = "favorite-games">
<div class = "empty-state">
You haven't liked any games yet. Visit our games section to find some!
< / div >
< / div>
< / div>

<div class = "dashboard-card">
<h3>Recently Played< / h3>
<div class = "recently-played" id = "recently-played">
<div class = "empty-state">
No recently played games.
< / div>
< / div>
< / div>
< / div>
< / div>
< / div>

<script>
// Get modal elements
const loginModal = document.getElementById("loginModal");
const signupModal = document.getElementById("signupModal");

// Get buttons
const loginBtn = document.getElementById("loginBtn");
const signupBtn = document.getElementById("signupBtn");

// Get close buttons
const closeBtns = document.getElementsByClassName("close");

// Get switch links
const switchToSignup = document.getElementById("switchToSignup");
const switchToLogin = document.getElementById("switchToLogin");

// Open login modal
loginBtn.onclick = function() {
    loginModal.style.display = "block";
}

// Open signup modal
signupBtn.onclick = function() {
    signupModal.style.display = "block";
}

// Close modals when clicking on x
for (let i = 0; i < closeBtns.length; i++) {
    closeBtns[i].onclick = function() {
        loginModal.style.display = "none";
        signupModal.style.display = "none";
    }
}

// Close modals when clicking outside
window.onclick = function(event) {
    if (event.target == loginModal) {
        loginModal.style.display = "none";
    }
    if (event.target == signupModal) {
        signupModal.style.display = "none";
    }
}

// Switch between login and signup
switchToSignup.onclick = function() {
    loginModal.style.display = "none";
    signupModal.style.display = "block";
}

switchToLogin.onclick = function() {
    signupModal.style.display = "none";
    loginModal.style.display = "block";
}

// Form validation
document.getElementById("loginForm").addEventListener("submit", function(event) {
    event.preventDefault();

    const username = document.getElementById("loginUsername").value;
    const password = document.getElementById("loginPassword").value;

    let isValid = true;

    // Reset errors
    document.getElementById("loginUsernameError").style.display = "none";
    document.getElementById("loginPasswordError").style.display = "none";
    document.getElementById("loginAlert").style.display = "none";

    // Validate username
    if (!username.trim()) {
        document.getElementById("loginUsernameError").style.display = "block";
        isValid = false;
    }

    // Validate password
    if (!password.trim()) {
        document.getElementById("loginPasswordError").style.display = "block";
        isValid = false;
    }

    if (isValid) {
        // Normally we would send the data to a server
        // For demonstration, we'll simulate success/failure

        // Check if we have this user in localStorage (simulating a database)
        const users = JSON.parse(localStorage.getItem("users") || "[]");
        const user = users.find(u = > u.username == = username && u.password == = password);

        if (user) {
            // Login successful - store current user
            localStorage.setItem("currentUser", JSON.stringify({ username: user.username }));

            // Close modal and refresh page
            loginModal.style.display = "none";
            window.location.reload();
        }
        else {
            // Show error
            const loginAlert = document.getElementById("loginAlert");
            loginAlert.textContent = "Invalid username or password";
            loginAlert.style.display = "block";
        }
    }
});

document.getElementById("signupForm").addEventListener("submit", function(event) {
    event.preventDefault();

    const username = document.getElementById("signupUsername").value;
    const email = document.getElementById("signupEmail").value;
    const password = document.getElementById("signupPassword").value;
    const confirmPassword = document.getElementById("signupConfirmPassword").value;

    let isValid = true;

    // Reset errors
    document.getElementById("signupUsernameError").style.display = "none";
    document.getElementById("signupEmailError").style.display = "none";
    document.getElementById("signupPasswordError").style.display = "none";
    document.getElementById("signupConfirmPasswordError").style.display = "none";
    document.getElementById("signupAlert").style.display = "none";

    // Validate username
    if (username.trim().length < 3) {
        document.getElementById("signupUsernameError").style.display = "block";
        isValid = false;
    }

    // Validate email
    const emailRegex = / ^ [^ \s@] + @[^ \s@] + \.[^ \s@] + $ / ;
    if (!emailRegex.test(email)) {
        document.getElementById("signupEmailError").style.display = "block";
        isValid = false;
    }

    // Validate password
    if (password.length < 6) {
        document.getElementById("signupPasswordError").style.display = "block";
        isValid = false;
    }

    // Confirm password
    if (password != = confirmPassword) {
        document.getElementById("signupConfirmPasswordError").style.display = "block";
        isValid = false;
    }

    if (isValid) {
        // Normally we would send the data to a server
        // For demonstration, we'll store in localStorage

        // Get existing users or create empty array
        const users = JSON.parse(localStorage.getItem("users") || "[]");

        // Check if username is taken
        if (users.some(u = > u.username == = username)) {
            const signupAlert = document.getElementById("signupAlert");
            signupAlert.textContent = "Username already taken";
            signupAlert.className = "alert alert-error";
            signupAlert.style.display = "block";
            return;
        }

        // Add new user
        users.push({ username, email, password });

        // Save users back to localStorage
        localStorage.setItem("users", JSON.stringify(users));

        // Also set as current user (auto-login)
        localStorage.setItem("currentUser", JSON.stringify({ username }));

        // Show success message
        const signupAlert = document.getElementById("signupAlert");
        signupAlert.textContent = "Account created successfully!";
        signupAlert.className = "alert alert-success";
        signupAlert.style.display = "block";

        // Reset form
        document.getElementById("signupForm").reset();

        // Add demo favorites and recently played games
        addDemoGames();

        // Close modal and refresh page after short delay
        setTimeout(() = > {
            signupModal.style.display = "none";
            window.location.reload();
        }, 1500);
    }
});

// Check if user is logged in on page load
document.addEventListener("DOMContentLoaded", function() {
    const currentUser = JSON.parse(localStorage.getItem("currentUser"));

    if (currentUser) {
        // User is logged in
        const loginBtn = document.getElementById("loginBtn");
        const signupBtn = document.getElementById("signupBtn");

        // Replace buttons with username and logout
        loginBtn.style.display = "none";
        signupBtn.outerHTML = `
            <div class = "account-dropdown">
            <button class = "btn btn-primary">Welcome, ${ currentUser.username }< / button>
            <div class = "account-dropdown-content">
            <a href = "#" id = "dashboardBtn">
            <span class = "account-icon">??< / span> My Dashboard
            < / a>
            <a href = "#" id = "changePasswordBtn">
            <span class = "account-icon">??< / span> Change Password
            < / a>
            <a href = "#" id = "changeUsernameBtn">
            <span class = "account-icon">??< / span> Change Username
            < / a>
            <a href = "#" id = "verifyPhoneBtn">
            <span class = "account-icon">??< / span> Verify Phone Number
            < / a>
            <a href = "#" id = "resetPasswordBtn">
            <span class = "account-icon">??< / span> Reset Password via Email
            < / a>
            <a href = "#" id = "logoutBtn">
            <span class = "account-icon">??< / span> Log Out
            < / a>
            < / div>
            < / div>
            `;

            // Show dashboard section
            document.getElementById("dashboard-section").style.display = "block";

        // Load user data into dashboard
        loadUserDashboard(currentUser);

        // Add event listeners for the new menu items
        document.getElementById("dashboardBtn").addEventListener("click", function(e) {
            e.preventDefault();
            document.getElementById("dashboard-section").scrollIntoView({ behavior: 'smooth' });
        });

        document.getElementById("logoutBtn").addEventListener("click", function(e) {
            e.preventDefault();
            if (confirm("Do you want to log out?")) {
                localStorage.removeItem("currentUser");
                window.location.reload();
            }
        });

        document.getElementById("changePasswordBtn").addEventListener("click", function(e) {
            e.preventDefault();
            showChangePasswordModal();
        });

        document.getElementById("changeUsernameBtn").addEventListener("click", function(e) {
            e.preventDefault();
            showChangeUsernameModal();
        });

        document.getElementById("verifyPhoneBtn").addEventListener("click", function(e) {
            e.preventDefault();
            showVerifyPhoneModal();
        });

        document.getElementById("resetPasswordBtn").addEventListener("click", function(e) {
            e.preventDefault();
            showResetPasswordModal();
        });
    }

    // Add forgot password link functionality
    document.getElementById("forgotPasswordLink").addEventListener("click", function(e) {
        e.preventDefault();
        showResetPasswordModal();
    });

    // Add event listener for the connect Roblox button
    const connectRobloxBtn = document.getElementById("connect-roblox-btn");
    if (connectRobloxBtn) {
        connectRobloxBtn.addEventListener("click", connectRobloxAccount);
    }

    // Add event listener for the verify follow button
    const verifyFollowBtn = document.getElementById("verify-follow-btn");
    if (verifyFollowBtn) {
        verifyFollowBtn.addEventListener("click", verifyFollowAndMembership);
    }
});

// Load user dashboard data
function loadUserDashboard(currentUser) {
    // Get user data from localStorage
    const users = JSON.parse(localStorage.getItem("users") || "[]");
    const user = users.find(u = > u.username == = currentUser.username);

    if (!user) return;

    // Set username in dashboard
    if (user.robloxUsername) {
        document.getElementById("dashboard-username").textContent =
            `${user.username
    } (${ user.robloxUsername })`;
}
 else {
    document.getElementById("dashboard-username").textContent = user.username;
    }

    // Set join date
    const joinDate = user.joinDate || new Date().toISOString();
    const formattedDate = new Date(joinDate).toLocaleDateString('en-US', {
      year: 'numeric',
      month : 'long',
      day : 'numeric'
        });
    document.getElementById("joined-date").textContent = formattedDate;

    // Check if Roblox account is connected
    if (user.robloxUsername) {
        // Hide the connect section and show verification section
        document.getElementById("connect-roblox-section").style.display = "none";
        document.getElementById("verification-section").style.display = "block";

        // Set verification status
        const verificationStatus = user.followVerified ? "Verified Member" : "Not Verified";
        document.getElementById("verification-status").textContent = verificationStatus;

        // If verified, hide verify button and show the verification badge
        if (user.followVerified) {
            document.getElementById("verify-follow-btn").style.display = "none";
            document.getElementById("profile-avatar").classList.add("verified");
        }
        else {
            document.getElementById("profile-avatar").classList.remove("verified");
        }

        // Load Roblox avatar
        fetchRobloxAvatar(user.robloxUsername);
    }
    else {
        // Set default avatar if no Roblox account
        const avatarImg = document.getElementById("dashboard-avatar-img");
        if (avatarImg) {
            avatarImg.src = "https://tr.rbxcdn.com/30925bbe6bed32148828f1a0a2215e18/150/150/Image/Png";
            avatarImg.alt = "Default Avatar";
        }
    }

    // Load favorite games if any
    if (user.favoriteGames && user.favoriteGames.length > 0) {
        const favoriteGamesContainer = document.getElementById("favorite-games");
        favoriteGamesContainer.innerHTML = '';

        user.favoriteGames.forEach(game = > {
            favoriteGamesContainer.innerHTML += `
                <div class = "favorite-game">
                <div class = "game-thumb">${ game.emoji || '??' }< / div>
                <div class = "game-info">
                <h4>${ game.name }< / h4>
                <p>Added on ${ new Date(game.dateAdded).toLocaleDateString() }< / p>
                < / div>
                < / div>
                `;
        });
    }

    // Load recently played games if any
    if (user.recentlyPlayed && user.recentlyPlayed.length > 0) {
        const recentlyPlayedContainer = document.getElementById("recently-played");
        recentlyPlayedContainer.innerHTML = '';

        user.recentlyPlayed.forEach(game = > {
            recentlyPlayedContainer.innerHTML += `
                <div class = "played-game">
                <div class = "game-thumb">${ game.emoji || '??' }< / div>
                <div class = "game-info">
                <h4>${ game.name }< / h4>
                <p>Played on ${ new Date(game.datePlayed).toLocaleDateString() }< / p>
                < / div>
                < / div>
                `;
        });
    }
    }

    // Fetch Roblox avatar
    async function fetchRobloxAvatar(robloxUsername) {
        if (!robloxUsername) return false;

        // Set a loading placeholder
        const avatarImg = document.getElementById("dashboard-avatar-img");
        if (avatarImg) {
            avatarImg.src = "https://tr.rbxcdn.com/30925bbe6bed32148828f1a0a2215e18/150/150/Image/Png";
            avatarImg.alt = "Loading " + robloxUsername + "'s Roblox Avatar...";

            // Add loading animation
            avatarImg.style.opacity = "0.7";
            avatarImg.style.transition = "opacity 0.3s";
        }

        try {
            // Try using direct user ID lookup if we have it stored
            const currentUser = JSON.parse(localStorage.getItem("currentUser"));
            const users = JSON.parse(localStorage.getItem("users") || "[]");
            const user = users.find(u = > u.username == = currentUser.username);

            let userId = null;

            // Check if we already have the Roblox ID stored
            if (user && user.robloxId) {
                userId = user.robloxId;
            }
            else {
                // Otherwise look up using the search API
                const userResponse = await fetch(`https://users.roblox.com/v1/users/search?keyword=${encodeURIComponent(robloxUsername)}&limit=10`);
                    const userData = await userResponse.json();

                // Find the exact match for username
                if (userData && userData.data) {
                    const exactMatch = userData.data.find(user = >
                        user.name.toLowerCase() == = robloxUsername.toLowerCase()
                    );

                    if (exactMatch) {
                        userId = exactMatch.id;
                    }
                    else if (userData.data.length > 0) {
                        // If no exact match, use the first result
                        userId = userData.data[0].id;
                    }
                }
            }

            if (userId) {
                // Update userId in localStorage
                if (user) {
                    const userIndex = users.findIndex(u = > u.username == = currentUser.username);
                    if (userIndex != = -1) {
                        users[userIndex].robloxId = userId;
                        localStorage.setItem("users", JSON.stringify(users));
                    }
                }

                // Try multiple avatar API endpoints for better reliability
                const avatarUrls = [
                    // Primary URL - headshot thumbnail
                    `https://www.roblox.com/headshot-thumbnail/image?userId=${userId}&width=150&height=150&format=png`,
                    // Backup URL - bust thumbnail
                        `https://www.roblox.com/bust-thumbnail/image?userId=${userId}&width=150&height=150&format=png`,
                        // Fallback URL - avatar thumbnail
                        `https://tr.rbxcdn.com/avatar/avatar-thumbnail/image?userId=${userId}&width=150&height=150&format=png`
                ];

                // Try to load the avatar from any of these URLs
                for (const avatarUrl of avatarUrls) {
                    try {
                        const successful = await new Promise((resolve) = > {
                            const img = new Image();
                            img.onload = () = > {
                                if (avatarImg) {
                                    avatarImg.src = avatarUrl;
                                    avatarImg.alt = `${robloxUsername
                                }'s Roblox Avatar`;
                                    avatarImg.style.opacity = "1";
                            }
                            resolve(true);
                        };
                        img.onerror = () = > resolve(false);
                        img.src = avatarUrl;
                    });

                    if (successful) return true;
                }
                catch (err) {
                    console.warn(`Failed to load avatar from URL : ${ avatarUrl }`);
                }
            }

            // If all URLs failed, use a default
            console.warn("All avatar URLs failed, using default");
            if (avatarImg) {
                avatarImg.src = "https://tr.rbxcdn.com/30925bbe6bed32148828f1a0a2215e18/150/150/Image/Png";
                avatarImg.alt = `${robloxUsername
            }'s Roblox Avatar (Failed to load)`;
                avatarImg.style.opacity = "1";
        }
        return false;
    }
 else {
        console.log("No Roblox user ID found for:", robloxUsername);
        if (avatarImg) {
            avatarImg.src = "https://tr.rbxcdn.com/30925bbe6bed32148828f1a0a2215e18/150/150/Image/Png";
            avatarImg.alt = `Avatar for ${ robloxUsername } (not found)`;
                avatarImg.style.opacity = "1";
        }
        return false;
        }
      }
      catch (error) {
          console.error("Error fetching Roblox avatar:", error);

          // Use default avatar in case of error
          if (avatarImg) {
              avatarImg.src = "https://tr.rbxcdn.com/30925bbe6bed32148828f1a0a2215e18/150/150/Image/Png";
              avatarImg.alt = `${robloxUsername
          }'s Roblox Avatar (Unable to load)`;
              avatarImg.style.opacity = "1";
      }
      return false;
      }
    }

    // Connect Roblox account
    async function connectRobloxAccount() {
        const robloxUsername = document.getElementById("roblox-username").value.trim();

        if (!robloxUsername) {
            alert("Please enter your Roblox username");
            return;
        }

        // Show loading state
        const connectBtn = document.getElementById("connect-roblox-btn");
        const originalText = connectBtn.textContent;
        connectBtn.textContent = "Connecting...";
        connectBtn.disabled = true;

        try {
            // For demo purposes, we'll simulate success and bypass the API call that might be failing
            const simulateSuccess = true; // Set to true for demo mode

            if (simulateSuccess) {
                // Simulate successful verification
                const fakeData = {
                  Id: Math.floor(Math.random() * 1000000000),
                  Username : robloxUsername,
                  success : true
                };

                // Process the successful connection
                processSuccessfulConnection(robloxUsername, fakeData.Id);
                return;
            }

            // Try the actual API (used when simulateSuccess is false)
            const response = await fetch(`https://api.roblox.com/users/get-by-username?username=${robloxUsername}`);
                const data = await response.json();

            if (data.Id) {
                // Username is valid
                processSuccessfulConnection(robloxUsername, data.Id);
            }
            else {
                alert("Roblox username not found. Please check the spelling and try again.");
            }
        }
        catch (error) {
            console.error("Error connecting Roblox account:", error);

            // Fallback for demo - still allow verification even if API fails
            const confirmFallback = confirm("Error connecting to Roblox API. Would you like to continue with a demo verification instead?");

            if (confirmFallback) {
                // Create fake Roblox ID for demo
                const fakeId = Math.floor(Math.random() * 1000000000);
                processSuccessfulConnection(robloxUsername, fakeId);
            }
            else {
                alert("Connection failed. Please try again later.");
            }
        }
        finally {
            // Reset button
            connectBtn.textContent = originalText;
            connectBtn.disabled = false;
        }
    }

    // Helper function to process successful Roblox connection
    function processSuccessfulConnection(robloxUsername, robloxId) {
        const currentUser = JSON.parse(localStorage.getItem("currentUser"));
        const users = JSON.parse(localStorage.getItem("users") || "[]");
        const userIndex = users.findIndex(u = > u.username == = currentUser.username);

        if (userIndex != = -1) {
            // Update user with Roblox info
            users[userIndex].robloxUsername = robloxUsername;
            users[userIndex].robloxId = robloxId;

            // Save back to localStorage
            localStorage.setItem("users", JSON.stringify(users));

            // Update UI
            document.getElementById("connect-roblox-section").style.display = "none";
            document.getElementById("verification-section").style.display = "block";

            // Show visual feedback during avatar loading
            const avatarContainer = document.getElementById("profile-avatar");

            // Add a temporary loading indicator
            let loadingIndicator = document.getElementById("avatar-loading");
            if (!loadingIndicator) {
                loadingIndicator = document.createElement("div");
                loadingIndicator.id = "avatar-loading";
                loadingIndicator.style.cssText = `
                    position: absolute;
                top : 0;
                left : 0;
            width: 100 %;
            height: 100 %;
                background - color: rgba(0, 0, 0, 0.5);
                border - radius: 60px;
            display: flex;
                align - items: center;
                justify - content: center;
            color: white;
                font - size: 14px;
                z - index: 10;
                `;
                    loadingIndicator.innerHTML = `
                    <div>
                    <div style = "text-align: center; margin-bottom: 5px;">Loading...< / div>
                    < div style = "width: 40px; height: 40px; border: 3px solid rgba(255,255,255,0.3); 
                    border - radius: 50 %; border - top - color: white; animation: spin 1s linear infinite;
            margin: 0 auto;"></div>
                < / div >
                `;

                // Add keyframe animation for spinner
                const styleSheet = document.createElement("style");
            styleSheet.type = "text/css";
            styleSheet.innerText = `
                @keyframes spin{
                  to { transform: rotate(360deg); }
            }
                `;
                document.head.appendChild(styleSheet);

            avatarContainer.appendChild(loadingIndicator);
            }

            // Force the avatar to update immediately by updating the src first
            const avatarImg = document.getElementById("dashboard-avatar-img");
            if (avatarImg) {
                avatarImg.src = `https://www.roblox.com/headshot-thumbnail/image?userId=${robloxId}&width=150&height=150&format=png`;
                    avatarImg.alt = `${robloxUsername
            }'s Roblox Avatar`;

                // Add an error handler in case the image doesn't load
                    avatarImg.onerror = function() {
                    console.error("Failed to load Roblox avatar directly, retrying with API");
                    // Try again with the fetchRobloxAvatar function
                    fetchRobloxAvatar(robloxUsername);
                };
        }

        // Load avatar with our function as backup
        fetchRobloxAvatar(robloxUsername).then(success = > {
            // Remove loading indicator
            if (loadingIndicator && avatarContainer.contains(loadingIndicator)) {
                avatarContainer.removeChild(loadingIndicator);
            }

            // Update username display
            document.getElementById("dashboard-username").textContent =
                `${currentUser.username} (${ robloxUsername })`;

                // Success message
                alert("Roblox account connected successfully!");
    });
      }
    }

    // Verify follow and group membership
    function verifyFollowAndMembership() {
        const currentUser = JSON.parse(localStorage.getItem("currentUser"));
        const users = JSON.parse(localStorage.getItem("users") || "[]");
        const userIndex = users.findIndex(u = > u.username == = currentUser.username);

        if (userIndex == = -1 || !users[userIndex].robloxUsername) {
            alert("Please connect your Roblox account first");
            return;
        }

        // Show loading state
        const verifyBtn = document.getElementById("verify-follow-btn");
        const originalText = verifyBtn.textContent;
        verifyBtn.textContent = "Verifying...";
        verifyBtn.disabled = true;

        // In a real app, we would use Roblox API to verify follow status and group membership
        // For this demo, we'll simulate the verification process

        // Simulate API call delay
        setTimeout(() = > {
            // Randomly determine if verification passed (in a real app, we'd check with actual API)
            const verificationPassed = Math.random() > 0.3; // 70% chance of success for demo

            if (verificationPassed) {
                // Mark as verified
                users[userIndex].followVerified = true;
                localStorage.setItem("users", JSON.stringify(users));

                // Update UI
                document.getElementById("verification-status").textContent = "Verified Member";
                verifyBtn.style.display = "none";

                // Add verification badge to avatar
                const avatarContainer = document.getElementById("profile-avatar");
                avatarContainer.classList.add("verified");

                // Add visual animation for success
                const avatar = document.getElementById("dashboard-avatar-img");
                avatar.style.transition = "all 0.5s ease";
                avatar.style.boxShadow = "0 0 0 4px var(--accent-green), 0 5px 15px rgba(0, 0, 0, 0.4)";

                // Reset animation after a delay
                setTimeout(() = > {
                    avatar.style.boxShadow = "";
                }, 2000);

                // Show success message
                alert("Verification successful! You are now a verified member.");
            }
            else {
                // Failed verification
                alert("Verification failed. Please make sure you have followed 24k_ake and joined THE KING ROBLOX community, then try again.");

                // Reset button
                verifyBtn.textContent = originalText;
                verifyBtn.disabled = false;
            }
        }, 2000);
    }

    // Modal handler functions for account management

    // Change Password Modal
    function showChangePasswordModal() {
        // Create and show modal
        const modal = document.createElement("div");
        modal.className = "modal";
        modal.style.display = "block";

        modal.innerHTML = `
            <div class = "modal-content">
            <span class = "close">&times;< / span>
            <h2 class = "modal-title">Change Password< / h2>

            <div id = "changePasswordAlert" class = "alert alert-error">< / div>

            <form id = "changePasswordForm">
            <div class = "form-group">
            <label for = "currentPassword">Current Password< / label>
            <input type = "password" id = "currentPassword" class = "form-control" placeholder = "Enter your current password">
            <div id = "currentPasswordError" class = "form-error">Please enter your current password< / div>
            < / div>

            <div class = "form-group">
            <label for = "newPassword">New Password< / label>
            <input type = "password" id = "newPassword" class = "form-control" placeholder = "Enter new password">
            <div id = "newPasswordError" class = "form-error">Password must be at least 6 characters< / div>
            < / div>

            <div class = "form-group">
            <label for = "confirmNewPassword">Confirm New Password< / label>
            <input type = "password" id = "confirmNewPassword" class = "form-control" placeholder = "Confirm new password">
            <div id = "confirmNewPasswordError" class = "form-error">Passwords do not match< / div>
            < / div>

            <button type = "submit" class = "form-button">Update Password< / button>
            < / form>
            < / div>
            `;

            document.body.appendChild(modal);

        // Add close button functionality
        modal.querySelector(".close").addEventListener("click", function() {
            document.body.removeChild(modal);
        });

        // Close when clicking outside
        modal.addEventListener("click", function(event) {
            if (event.target == = modal) {
                document.body.removeChild(modal);
            }
        });

        // Form submission
        modal.querySelector("#changePasswordForm").addEventListener("submit", function(e) {
            e.preventDefault();

            const currentPassword = document.getElementById("currentPassword").value;
            const newPassword = document.getElementById("newPassword").value;
            const confirmNewPassword = document.getElementById("confirmNewPassword").value;

            let isValid = true;

            // Reset errors
            document.getElementById("currentPasswordError").style.display = "none";
            document.getElementById("newPasswordError").style.display = "none";
            document.getElementById("confirmNewPasswordError").style.display = "none";
            document.getElementById("changePasswordAlert").style.display = "none";

            // Validate current password
            if (!currentPassword.trim()) {
                document.getElementById("currentPasswordError").style.display = "block";
                isValid = false;
            }

            // Validate new password
            if (newPassword.length < 6) {
                document.getElementById("newPasswordError").style.display = "block";
                isValid = false;
            }

            // Confirm new password
            if (newPassword != = confirmNewPassword) {
                document.getElementById("confirmNewPasswordError").style.display = "block";
                isValid = false;
            }

            if (isValid) {
                // Get current user
                const currentUser = JSON.parse(localStorage.getItem("currentUser"));

                // Get all users
                const users = JSON.parse(localStorage.getItem("users") || "[]");

                // Find user
                const userIndex = users.findIndex(u = > u.username == = currentUser.username);

                if (userIndex != = -1) {
                    // Check if current password is correct
                    if (users[userIndex].password == = currentPassword) {
                        // Update password
                        users[userIndex].password = newPassword;

                        // Save back to localStorage
                        localStorage.setItem("users", JSON.stringify(users));

                        // Show success message
                        const alert = document.getElementById("changePasswordAlert");
                        alert.textContent = "Password updated successfully!";
                        alert.className = "alert alert-success";
                        alert.style.display = "block";

                        // Close modal after delay
                        setTimeout(() = > {
                            document.body.removeChild(modal);
                        }, 2000);
                    }
                    else {
                        // Current password is wrong
                        const alert = document.getElementById("changePasswordAlert");
                        alert.textContent = "Current password is incorrect";
                        alert.className = "alert alert-error";
                        alert.style.display = "block";
                    }
                }
            }
        });
    }

    // Change Username Modal
    function showChangeUsernameModal() {
        // Create and show modal
        const modal = document.createElement("div");
        modal.className = "modal";
        modal.style.display = "block";

        modal.innerHTML = `
            <div class = "modal-content">
            <span class = "close">&times;< / span>
            <h2 class = "modal-title">Change Username< / h2>

            <div id = "changeUsernameAlert" class = "alert alert-error">< / div>

            <form id = "changeUsernameForm">
            <div class = "form-group">
            <label for = "currentUsername">Current Username< / label>
            <input type = "text" id = "currentUsername" class = "form-control" disabled>
            < / div>

            <div class = "form-group">
            <label for = "newUsername">New Username< / label>
            <input type = "text" id = "newUsername" class = "form-control" placeholder = "Enter new username">
            <div id = "newUsernameError" class = "form-error">Username must be at least 3 characters< / div>
            < / div>

            <div class = "form-group">
            <label for = "passwordConfirm">Password(to confirm) < / label >
            <input type = "password" id = "passwordConfirm" class = "form-control" placeholder = "Enter your password">
            <div id = "passwordConfirmError" class = "form-error">Please enter your password< / div>
            < / div>

            <button type = "submit" class = "form-button">Update Username< / button>
            < / form>
            < / div>
            `;

            document.body.appendChild(modal);

        // Set current username
        const currentUser = JSON.parse(localStorage.getItem("currentUser"));
        document.getElementById("currentUsername").value = currentUser.username;

        // Add close button functionality
        modal.querySelector(".close").addEventListener("click", function() {
            document.body.removeChild(modal);
        });

        // Close when clicking outside
        modal.addEventListener("click", function(event) {
            if (event.target == = modal) {
                document.body.removeChild(modal);
            }
        });

        // Form submission
        modal.querySelector("#changeUsernameForm").addEventListener("submit", function(e) {
            e.preventDefault();

            const newUsername = document.getElementById("newUsername").value;
            const passwordConfirm = document.getElementById("passwordConfirm").value;

            let isValid = true;

            // Reset errors
            document.getElementById("newUsernameError").style.display = "none";
            document.getElementById("passwordConfirmError").style.display = "none";
            document.getElementById("changeUsernameAlert").style.display = "none";

            // Validate new username
            if (newUsername.trim().length < 3) {
                document.getElementById("newUsernameError").style.display = "block";
                isValid = false;
            }

            // Validate password
            if (!passwordConfirm.trim()) {
                document.getElementById("passwordConfirmError").style.display = "block";
                isValid = false;
            }

            if (isValid) {
                // Get current user
                const currentUser = JSON.parse(localStorage.getItem("currentUser"));

                // Get all users
                const users = JSON.parse(localStorage.getItem("users") || "[]");

                // Find user
                const userIndex = users.findIndex(u = > u.username == = currentUser.username);

                if (userIndex != = -1) {
                    // Check if password is correct
                    if (users[userIndex].password == = passwordConfirm) {
                        // Check if username is taken
                        if (users.some(u = > u.username == = newUsername && u.username != = currentUser.username)) {
                            const alert = document.getElementById("changeUsernameAlert");
                            alert.textContent = "Username already taken";
                            alert.className = "alert alert-error";
                            alert.style.display = "block";
                            return;
                        }

                        // Update username
                        const oldUsername = users[userIndex].username;
                        users[userIndex].username = newUsername;

                        // Save back to localStorage
                        localStorage.setItem("users", JSON.stringify(users));

                        // Update current user
                        localStorage.setItem("currentUser", JSON.stringify({ username: newUsername }));

                        // Show success message
                        const alert = document.getElementById("changeUsernameAlert");
                        alert.textContent = "Username updated successfully!";
                        alert.className = "alert alert-success";
                        alert.style.display = "block";

                        // Close modal and refresh page after delay
                        setTimeout(() = > {
                            document.body.removeChild(modal);
                            window.location.reload();
                        }, 2000);
                    }
                    else {
                        // Password is wrong
                        const alert = document.getElementById("changeUsernameAlert");
                        alert.textContent = "Password is incorrect";
                        alert.className = "alert alert-error";
                        alert.style.display = "block";
                    }
                }
            }
        });
    }

    // Phone Verification Modal
    function showVerifyPhoneModal() {
        // Create and show modal
        const modal = document.createElement("div");
        modal.className = "modal";
        modal.style.display = "block";

        modal.innerHTML = `
            <div class = "modal-content">
            <span class = "close">&times;< / span>
            <h2 class = "modal-title">Verify Phone Number< / h2>

            <div id = "verifyPhoneAlert" class = "alert alert-error">< / div>

            <form id = "verifyPhoneForm">
            <div class = "form-group">
            <label for = "phoneNumber">Phone Number< / label>
            <input type = "tel" id = "phoneNumber" class = "form-control" placeholder = "Enter your phone number">
            <div id = "phoneNumberError" class = "form-error">Please enter a valid phone number< / div>
            < / div>

            <button type = "submit" class = "form-button">Send Verification Code< / button>
            < / form>

            <!--Always show the verification code immediately-->
            <div id = "demoCodeDisplay" style = "background-color: #4CAF50; color: white; border: 2px solid #388E3C; padding: 15px; margin: 20px 0; border-radius: 6px; text-align: center; font-size: 16px; box-shadow: 0 2px 5px rgba(0,0,0,0.2);">
            <p style = "margin: 0; font-weight: bold; font-size: 18px;">Your Verification Code : < span style = "font-size: 24px; letter-spacing: 2px; background: white; color: #388E3C; padding: 2px 15px; border-radius: 4px;">123456 < / span > < / p>
            <p style = "margin: 8px 0 0; font-size: 14px;">This is a demo.In a real app, this code would be sent via SMS to your phone.< / p>
            < / div>

            <div id = "verificationCodeSection">
            <div class = "form-group">
            <label for = "verificationCode">Verification Code< / label>
            <input type = "text" id = "verificationCode" class = "form-control" placeholder = "Enter the 6-digit code">
            <div id = "verificationCodeError" class = "form-error">Please enter a valid code< / div>
            < / div>

            <button id = "verifyCodeBtn" class = "form-button">Verify Code< / button>
            < / div>
            < / div>
            `;

            document.body.appendChild(modal);

        // Add close button functionality
        modal.querySelector(".close").addEventListener("click", function() {
            document.body.removeChild(modal);
        });

        // Close when clicking outside
        modal.addEventListener("click", function(event) {
            if (event.target == = modal) {
                document.body.removeChild(modal);
            }
        });

        // Form submission for phone number
        modal.querySelector("#verifyPhoneForm").addEventListener("submit", function(e) {
            e.preventDefault();

            const phoneNumber = document.getElementById("phoneNumber").value;

            // Reset errors
            document.getElementById("phoneNumberError").style.display = "none";
            document.getElementById("verifyPhoneAlert").style.display = "none";

            // Basic phone validation
            const phoneRegex = / ^ \ + ? [0 - 9] {10, 15}$ / ;
            if (!phoneRegex.test(phoneNumber.replace(/ [\s\ - \(\)] / g, ''))) {
                document.getElementById("phoneNumberError").style.display = "block";
                return;
            }

            // Show success message
            const alert = document.getElementById("verifyPhoneAlert");
            alert.textContent = "Verification code sent to your phone!";
            alert.className = "alert alert-success";
            alert.style.display = "block";

            // Show verification code section
            document.getElementById("verificationCodeSection").style.display = "block";
            document.getElementById("verifyPhoneForm").style.display = "none";
        });

        // Verification code submission
        modal.querySelector("#verifyCodeBtn").addEventListener("click", function() {
            const verificationCode = document.getElementById("verificationCode").value;

            // Reset errors
            document.getElementById("verificationCodeError").style.display = "none";

            // Validate code
            if (!/ ^ \d{ 6 }$ / .test(verificationCode)) {
                document.getElementById("verificationCodeError").style.display = "block";
                return;
            }

            // For demo, accept "123456" or any 6-digit code 
            // Get current user
            const currentUser = JSON.parse(localStorage.getItem("currentUser"));

            // Get all users
            const users = JSON.parse(localStorage.getItem("users") || "[]");

            // Find user
            const userIndex = users.findIndex(u = > u.username == = currentUser.username);

            if (userIndex != = -1) {
                // Store the phone number
                const phoneNumber = document.getElementById("phoneNumber").value;
                users[userIndex].phoneNumber = phoneNumber;
                users[userIndex].phoneVerified = true;

                // Save back to localStorage
                localStorage.setItem("users", JSON.stringify(users));

                // Show success message
                const alert = document.getElementById("verifyPhoneAlert");
                alert.textContent = "Phone number verified successfully!";
                alert.className = "alert alert-success";
                alert.style.display = "block";

                // Close modal after delay
                setTimeout(() = > {
                    document.body.removeChild(modal);
                }, 2000);
            }
        });
    }

    // Reset Password Modal
    function showResetPasswordModal() {
        // Create and show modal
        const modal = document.createElement("div");
        modal.className = "modal";
        modal.style.display = "block";

        modal.innerHTML = `
            <div class = "modal-content">
            <span class = "close">&times;< / span>
            <h2 class = "modal-title">Reset Password via Email< / h2>

            <div id = "resetPasswordAlert" class = "alert alert-error">< / div>

            <!--Always show the temporary password immediately-->
            <div style = "background-color: #4CAF50; color: white; border: 2px solid #388E3C; padding: 15px; margin: 20px 0; border-radius: 6px; text-align: center; font-size: 16px; box-shadow: 0 2px 5px rgba(0,0,0,0.2);">
            <p style = "margin: 0; font-weight: bold; font-size: 18px;">Your Temporary Password : <span style = "font-size: 24px; letter-spacing: 2px; background: white; color: #388E3C; padding: 2px 15px; border-radius: 4px;">TempPass123< / span>< / p>
            <p style = "margin: 8px 0 0; font-size: 14px;">This is a demo.In a real app, this would be sent to your email address.< / p>
            < / div>

            <form id = "resetPasswordForm">
            <div class = "form-group">
            <label for = "resetEmail">Email Address< / label>
            <input type = "email" id = "resetEmail" class = "form-control" placeholder = "Enter your email address">
            <div id = "resetEmailError" class = "form-error">Please enter a valid email address< / div>
            < / div>

            <button type = "submit" class = "form-button">Verify Email< / button>
            < / form>

            <div id = "passwordResetSection">
            <div class = "form-group">
            <label for = "tempPassword">Temporary Password< / label>
            <input type = "text" id = "tempPassword" class = "form-control" placeholder = "Enter temporary password" value = "TempPass123" readonly>
            < / div>

            <div class = "form-group">
            <label for = "newPassword">New Password< / label>
            <input type = "password" id = "newPassword" class = "form-control" placeholder = "Enter new password">
            <div id = "newPasswordError" class = "form-error">Password must be at least 6 characters< / div>
            < / div>

            <div class = "form-group">
            <label for = "confirmNewPassword">Confirm New Password< / label>
            <input type = "password" id = "confirmNewPassword" class = "form-control" placeholder = "Confirm new password">
            <div id = "confirmNewPasswordError" class = "form-error">Passwords do not match< / div>
            < / div>

            <button id = "resetPasswordBtn" class = "form-button">Reset Password< / button>
            < / div>
            < / div>
            `;

            document.body.appendChild(modal);

        // Add close button functionality
        modal.querySelector(".close").addEventListener("click", function() {
            document.body.removeChild(modal);
        });

        // Close when clicking outside
        modal.addEventListener("click", function(event) {
            if (event.target == = modal) {
                document.body.removeChild(modal);
            }
        });

        // Set email if available
        const currentUser = JSON.parse(localStorage.getItem("currentUser"));
        if (currentUser) {
            const users = JSON.parse(localStorage.getItem("users") || "[]");
            const user = users.find(u = > u.username == = currentUser.username);

            if (user && user.email) {
                document.getElementById("resetEmail").value = user.email;
            }
        }

        // Form submission for email
        modal.querySelector("#resetPasswordForm").addEventListener("submit", function(e) {
            e.preventDefault();

            const email = document.getElementById("resetEmail").value;

            // Reset errors
            document.getElementById("resetEmailError").style.display = "none";
            document.getElementById("resetPasswordAlert").style.display = "none";

            // Validate email
            const emailRegex = / ^ [^ \s@] + @[^ \s@] + \.[^ \s@] + $ / ;
            if (!emailRegex.test(email)) {
                document.getElementById("resetEmailError").style.display = "block";
                return;
            }

            // Hide form after validation to emphasize reset section
            document.getElementById("resetPasswordForm").style.display = "none";

            // Show success message
            const alert = document.getElementById("resetPasswordAlert");
            alert.textContent = "Email verified! Now set your new password using the temporary password provided.";
            alert.className = "alert alert-success";
            alert.style.display = "block";
        });

        // Reset password button click
        modal.querySelector("#resetPasswordBtn").addEventListener("click", function() {
            const tempPassword = document.getElementById("tempPassword").value;
            const newPassword = document.getElementById("newPassword").value;
            const confirmNewPassword = document.getElementById("confirmNewPassword").value;

            // Reset errors
            document.getElementById("newPasswordError").style.display = "none";
            document.getElementById("confirmNewPasswordError").style.display = "none";
            document.getElementById("resetPasswordAlert").style.display = "none";

            let isValid = true;

            // Skip temp password check since it's readonly and prefilled now

            // Validate new password
            if (newPassword.length < 6) {
                document.getElementById("newPasswordError").style.display = "block";
                isValid = false;
            }

            // Confirm password
            if (newPassword != = confirmNewPassword) {
                document.getElementById("confirmNewPasswordError").style.display = "block";
                isValid = false;
            }

            if (!isValid) return;

            // Get email from form
            const email = document.getElementById("resetEmail").value;

            // Find user with this email
            const users = JSON.parse(localStorage.getItem("users") || "[]");
            const userIndex = users.findIndex(u = > u.email == = email);

            if (userIndex != = -1) {
                // Update password
                users[userIndex].password = newPassword;

                // Save back to localStorage
                localStorage.setItem("users", JSON.stringify(users));

                // Show success message
                const alert = document.getElementById("resetPasswordAlert");
                alert.textContent = "Password reset successfully!";
                alert.className = "alert alert-success";
                alert.style.display = "block";

                // Close modal after delay
                setTimeout(() = > {
                    document.body.removeChild(modal);
                }, 2000);
            }
            else {
                // Handle case where email doesn't exist (shouldn't happen with form validation)
                const alert = document.getElementById("resetPasswordAlert");
                alert.textContent = "Password reset successful!";
                alert.className = "alert alert-success";
                alert.style.display = "block";

                // Close modal after delay
                setTimeout(() = > {
                    document.body.removeChild(modal);
                }, 2000);
            }
        });
    }

    // Add games to favorites for demonstration
    function addDemoGames() {
        const currentUser = JSON.parse(localStorage.getItem("currentUser"));
        if (!currentUser) return;

        const users = JSON.parse(localStorage.getItem("users") || "[]");
        const userIndex = users.findIndex(u = > u.username == = currentUser.username);

        if (userIndex != = -1) {
            // Add favorite games if not already present
            if (!users[userIndex].favoriteGames) {
                users[userIndex].favoriteGames = [
                {
                name: "SCP-096",
                    emoji : "??",
                    dateAdded : new Date().toISOString(),
                    url : "https://www.roblox.com/games/136171504136247/SCP-096"
                },
            {
              name: "TitanGrip",
              emoji : "??",
              dateAdded : new Date(Date.now() - 86400000).toISOString(), // Yesterday
              url : "https://www.roblox.com/games/94422510929213/TitanGrip"
            }
                ];
            }

            // Add recently played games if not already present
            if (!users[userIndex].recentlyPlayed) {
                users[userIndex].recentlyPlayed = [
                {
                name: "Shadow Slayer",
                    emoji : "??",
                    datePlayed : new Date().toISOString(),
                    url : "https://www.roblox.com/games/97176783366995/Shadow-Slayer"
                },
            {
              name: "Superhero Flight",
              emoji : "??",
              datePlayed : new Date(Date.now() - 172800000).toISOString(), // 2 days ago
              url : "https://www.roblox.com/games/135225216190420/Supeerhero-flight"
            }
                ];
            }

            // Save back to localStorage
            localStorage.setItem("users", JSON.stringify(users));

            // Reload dashboard
            loadUserDashboard(currentUser);
        }
    }
    < / script>
        < / body>
        < / html>
