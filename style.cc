/* RESET & GLOBAL STYLES */
* { margin: 0; padding: 0; box-sizing: border-box; }
html { scroll-behavior: smooth; }
body { font-family: 'Poppins', sans-serif; line-height: 1.6; color: #333; background-color: #f9fbf9; transition: background-color 0.5s, color 0.5s; }

/* HEADER & NAVIGASI */
header { background: rgba(27, 94, 32, 0.95); color: #fff; padding: 1rem 0; position: sticky; top: 0; z-index: 1000; backdrop-filter: blur(5px); box-shadow: 0 4px 6px rgba(0,0,0,0.1); }
.container { width: 90%; max-width: 1100px; margin: auto; display: flex; justify-content: space-between; align-items: center; }
header h1 { font-size: 1.8rem; font-weight: 700; letter-spacing: 1px; }
header nav ul { list-style: none; display: flex; }
header nav ul li { margin-left: 25px; }
header nav ul li a { color: #fff; text-decoration: none; font-weight: 500; transition: color 0.3s; }
header nav ul li a:hover { color: #a5d6a7; }

/* BADGE STYLE */
.new-badge {
    position: relative;
    display: inline-block;
    padding-right: 25px; 
}

.new-badge::after {
    content: 'BARU';
    position: absolute;
    top: -10px;
    right: -10px;
    background-color: #ff5722; 
    color: white;
    padding: 2px 6px;
    border-radius: 5px;
    font-size: 0.7rem;
    font-weight: 700;
    transform: rotate(10deg);
    animation: newPulse 1.5s infinite;
}

@keyframes newPulse {
    0% { transform: scale(1) rotate(10deg); box-shadow: 0 0 0 0 rgba(255, 87, 34, 0.4); }
    70% { transform: scale(1.1) rotate(10deg); box-shadow: 0 0 0 10px rgba(255, 87, 34, 0); }
    100% { transform: scale(1) rotate(10deg); box-shadow: 0 0 0 0 rgba(255, 87, 34, 0); }
}

/* HERO SECTION & PARALLAX */
#hero {
    background-image: linear-gradient(rgba(0,0,0,0.6), rgba(0,0,0,0.6)), url('https://images.unsplash.com/photo-1473448912268-2022ce9509d8?q=80&w=1441&auto=format&fit=crop');
    background-size: cover; 
    background-position: center; 
    background-attachment: fixed; 
    color: #fff; height: 90vh;
    display: flex; flex-direction: column; justify-content: center; align-items: center;
    text-align: center; padding: 20px;
}
#hero h2 { font-size: 3.5rem; margin-bottom: 15px; text-shadow: 2px 2px 4px rgba(0,0,0,0.5); }
#hero p { font-size: 1.3rem; max-width: 700px; margin-bottom: 30px; }

.btn {
    display: inline-block; background: #4caf50; color: #fff; padding: 12px 35px;
    border-radius: 50px; text-decoration: none; font-weight: 600; transition: 0.3s;
    box-shadow: 0 4px 15px rgba(76, 175, 80, 0.4); animation: pulse 2s infinite; border: none;
}
@keyframes pulse {
    0% { box-shadow: 0 0 0 0 rgba(76, 175, 80, 0.5); }
    70% { box-shadow: 0 0 0 15px rgba(76, 175, 80, 0); }
    100% { box-shadow: 0 0 0 0 rgba(76, 175, 80, 0); }
}
.btn:hover { background: #43a047; transform: scale(1.05); }

/* SECTION UMUM */
section { padding: 80px 0; }
.section-title { text-align: center; margin-bottom: 50px; color: #1b5e20; font-size: 2.2rem; font-weight: 700; }

/* ABOUT SECTION */
.about-content { display: flex; align-items: center; gap: 40px; }
.about-text { flex: 1; }
.about-img { flex: 1; text-align: center; }
.about-img img { width: 100%; max-width: 400px; border-radius: 10px; box-shadow: 0 5px 15px rgba(0,0,0,0.1); }

/* CARD GRID (Untuk Types) */
.grid-3 {
    display: grid; grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));
    gap: 30px; width: 90%; max-width: 1100px; margin: auto;
}
.card {
    background: #fff; padding: 25px; border-radius: 15px;
    box-shadow: 0 5px 15px rgba(0,0,0,0.05); text-align: center;
    transition: transform 0.3s ease, box-shadow 0.3s ease;
    border-bottom: 5px solid #4caf50;
}
.card:hover { transform: translateY(-10px) scale(1.02); box-shadow: 0 15px 30px rgba(0,0,0,0.15); }
.card h3 { margin: 15px 0; color: #2e7d32; }
.card img { width: 100%; height: 180px; object-fit: cover; border-radius: 10px; }

/* TEKNOLOGI BARU SECTION (Baru) */
#teknologi { background-color: #e3f2fd; }
.tech-grid { display: grid; grid-template-columns: 1fr 1fr; gap: 40px; align-items: start; }
.tech-text { padding: 20px; background: #fff; border-radius: 10px; box-shadow: 0 5px 15px rgba(0,0,0,0.05); }
.tech-text h3 { color: #1b5e20; margin-bottom: 10px; font-size: 1.5rem; }
.tech-img img { width: 100%; border-radius: 10px; box-shadow: 0 5px 15px rgba(0,0,0,0.1); }

.video-section { background-color: #fff; padding: 40px; border-radius: 10px; box-shadow: 0 5px 15px rgba(0,0,0,0.05); grid-column: 1 / -1; margin-top: 20px; }
.video-container { position: relative; padding-bottom: 56.25%; height: 0; overflow: hidden; margin-top: 15px; border-radius: 5px; }
.video-container iframe { position: absolute; top: 0; left: 0; width: 100%; height: 100%; border: none; }

/* TRANSITION FLOW SECTION (Menggantikan Dampak) */
#transisi { padding: 80px 0; background-color: #e8f5e9; } 
.transition-flow {
    display: flex;
    justify-content: space-between;
    align-items: center;
    gap: 20px;
    margin-top: 50px;
    overflow-x: auto; /* Agar responsif pada layar kecil */
}
.flow-step {
    flex: 1;
    min-width: 200px; 
    background: #fff;
    padding: 20px;
    border-radius: 12px;
    text-align: center;
    box-shadow: 0 8px 15px rgba(0,0,0,0.1);
    border-bottom: 4px solid #4caf50;
    transition: transform 0.3s ease;
    position: relative;
    animation: fadeInStep 1.5s ease-out forwards;
    opacity: 0;
}
.flow-step:hover {
    transform: translateY(-8px);
}
.flow-step h3 {
    color: #1b5e20;
    margin-bottom: 10px;
    font-size: 1.2rem;
}
.flow-step span {
    display: block;
    font-size: 2rem;
    margin-top: 10px;
}
.flow-arrow {
    font-size: 2rem;
    color: #4caf50;
    opacity: 0.7;
}

/* Animasi Sederhana */
@keyframes fadeInStep {
    0% { opacity: 0; transform: translateY(20px); }
    100% { opacity: 1; transform: translateY(0); }
}

.step-1 { animation-delay: 0.1s; }
.step-2 { animation-delay: 0.6s; }
.step-3 { animation-delay: 1.1s; }
.step-4 { animation-delay: 1.6s; }


/* FAQ, QUIZ, CONTACT */
#faq { background-color: #e8f5e9; }
.faq-item { background: #fff; margin-bottom: 15px; border-radius: 8px; padding: 15px; cursor: pointer; box-shadow: 0 4px 10px rgba(0,0,0,0.05); }
.faq-question { font-weight: 600; color: #1b5e20; display: flex; justify-content: space-between; align-items: center; }
.faq-answer { display: none; padding-top: 10px; color: #555; border-top: 1px solid #eee; margin-top: 10px; }
#quiz { background-color: #f9fbf9; }
.quiz-box { background: #fff; padding: 25px; border-radius: 10px; max-width: 600px; margin: auto; box-shadow: 0 5px 15px rgba(0,0,0,0.1); }
.quiz-box button { padding: 10px 20px; margin-top: 15px; background: #4caf50; color: white; border: none; border-radius: 5px; cursor: pointer; transition: background 0.3s; }
.quiz-box button:hover { background: #43a047; }
.quiz-box input[type="radio"] { margin-right: 5px; margin-top: 5px; } 

#contact { background-color: #e8f5e9; }
.contact-form { max-width: 600px; margin: auto; background: #fff; padding: 30px; border-radius: 10px; box-shadow: 0 5px 15px rgba(0,0,0,0.05); }
.form-group { margin-bottom: 20px; }
.form-group label { display: block; margin-bottom: 5px; font-weight: 600; }
.form-group input, .form-group textarea { width: 100%; padding: 10px; border: 1px solid #ccc; border-radius: 5px; font-family: inherit; }
.form-group input:focus, .form-group textarea:focus { outline: none; border-color: #4caf50; box-shadow: 0 0 5px rgba(76, 175, 80, 0.3); }

/* FOOTER & DARK MODE */
footer { background: #1b5e20; color: #fff; text-align: center; padding: 30px 0; }
#darkToggle { position: fixed; bottom: 25px; right: 25px; padding: 12px 15px; background: #1b5e20; color: #fff; border-radius: 50px; cursor: pointer; z-index: 1001; box-shadow: 0 4px 8px rgba(0,0,0,0.2); transition: background 0.3s; }
#darkToggle:hover { background: #2e7d32; }
body.dark { background-color: #111; color: #eee; }
body.dark header { background: #0d3d14; box-shadow: 0 4px 6px rgba(255,255,255,0.1); }
body.dark .section-title { color: #a5d6a7; }
body.dark #teknologi { background-color: #191970; }
body.dark #transisi { background-color: #0d3d14; } /* Dark mode untuk transisi */
body.dark .card, body.dark .faq-item, body.dark .quiz-box, body.dark .contact-form, body.dark .tech-text, body.dark .video-section, body.dark .flow-step { 
    background: #222; 
    color: #eee; 
    box-shadow: 0 5px 15px rgba(255,255,255,0.05); 
}
body.dark .card:hover, body.dark .flow-step:hover { box-shadow: 0 15px 30px rgba(255,255,255,0.1); }
body.dark .card h3, body.dark .faq-question, body.dark .flow-step h3 { color: #a5d6a7; }
body.dark .faq-answer { border-top-color: #444; color: #ccc; }
body.dark .form-group input, body.dark .form-group textarea { background: #333; color: #eee; border-color: #555; }

/* RESPONSIF */
@media(max-width: 900px) {
    .tech-grid { grid-template-columns: 1fr; }
}
@media(max-width: 768px) {
    #hero h2 { font-size: 2.2rem; }
    .container { flex-direction: column; }
    header nav ul { margin-top: 20px; gap: 15px; justify-content: center;}
    header nav ul li { margin-left: 0; }
    .about-content { flex-direction: column; }
    .about-img { margin-top: 20px; }
    
    /* Responsive untuk Transition Flow */
    .transition-flow {
        flex-direction: column;
        align-items: stretch;
    }
    .flow-arrow {
        transform: rotate(90deg);
        margin: 10px 0;
    }
}