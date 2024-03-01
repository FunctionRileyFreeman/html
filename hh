<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Artist Portfolio</title>
  <style>
    /* Styles for the entire page */
    body {
      margin: 0;
      padding: 0;
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background-color: #f8f8f8;
    }

    /* Styles for the header section */
    header {
      background-color: #ff6f61;
      color: #fff;
      padding: 20px;
      text-align: center;
      border-bottom: 5px solid #ff583f;
      box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
    }

    /* Styles for the navigation menu */
    nav {
      display: flex;
      justify-content: center;
      margin-top: 20px;
    }

    nav a {
      color: #fff;
      text-decoration: none;
      padding: 10px 20px;
      margin: 0 10px;
      border-radius: 5px;
      transition: background-color 0.3s;
    }

    nav a:hover {
      background-color: #ff583f;
    }

    /* Styles for the main content section */
    main {
      padding: 20px;
    }

    /* Styles for the gallery section */
    .gallery {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
      grid-gap: 20px;
      margin-top: 20px;
    }

    .gallery img {
      max-width: 100%;
      height: auto;
      border-radius: 5px;
      cursor: pointer;
      transition: transform 0.3s ease;
    }

    .gallery img:hover {
      transform: scale(1.1);
    }

    /* Styles for the footer section */
    footer {
      background-color: #ff6f61;
      color: #fff;
      text-align: center;
      padding: 20px;
      position: fixed;
      bottom: 0;
      width: 100%;
      border-top: 5px solid #ff583f;
      box-shadow: 0 -4px 6px rgba(0, 0, 0, 0.1);
    }

    footer p {
      margin: 0;
    }

    /* Animation for the header */
    @keyframes headerAnimation {
      0% {
        transform: translateY(-50px);
        opacity: 0;
      }
      100% {
        transform: translateY(0);
        opacity: 1;
      }
    }

    header {
      animation: headerAnimation 0.5s ease-out 0s 1 forwards;
    }
  </style>
</head>
<body>
  <header>
    <h1>Artist Portfolio</h1>
    <nav>
      <a href="#about">About</a>
      <a href="#gallery">Gallery</a>
      <a href="#contact">Contact</a>
      <a href="#blog">Blog</a>
    </nav>
  </header>

  <main>
    <section id="about">
      <h2>About the Artist</h2>
      <p>Insert artist bio here. Talk about inspiration, artistic style, and background.</p>
    </section>

    <section id="gallery">
      <h2>Gallery</h2>
      <div class="gallery">
        <img src="image1.jpg" alt="Artwork 1">
        <img src="image2.jpg" alt="Artwork 2">
        <!-- Add more images as needed -->
      </div>
    </section>

    <section id="contact">
      <h2>Contact</h2>
      <form>
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required><br><br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required><br><br>
        <label for="message">Message:</label><br>
        <textarea id="message" name="message" rows="4" required></textarea><br><br>
        <button type="submit">Submit</button>
      </form>
    </section>

    <section id="blog">
      <h2>Blog</h2>
      <p>Insert latest blog posts or news updates here.</p>
    </section>
  </main>

  <footer>
    <p>&copy; 2024 Artist Portfolio. All rights reserved.</p>
  </footer>
</body>
</html>
