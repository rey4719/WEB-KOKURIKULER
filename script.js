// --- FUNGSI JAVASCRIPT ASLI YANG DIPERBAHARUI ---

// FAQ Toggle (Accordion)
const faqItems = document.querySelectorAll('.faq-item');
faqItems.forEach(item => {
    item.addEventListener('click', () => {
        const answer = item.querySelector('.faq-answer');
        const span = item.querySelector('.faq-question span');
        const isVisible = answer.style.display === 'block';

        // Tutup semua jawaban (untuk efek accordion)
        document.querySelectorAll('.faq-answer').forEach(a => a.style.display = 'none');
        document.querySelectorAll('.faq-question span').forEach(s => s.innerHTML = '&darr;');
        
        // Tampilkan/Sembunyikan jawaban yang diklik
        if (!isVisible) {
            answer.style.display = 'block';
            span.innerHTML = '&uarr;';
        }
    });
});

// Quiz Function (Diperbarui untuk 10 SOAL ENERGI BARU)
function cekQuiz(){
    let skor = 0;
    const poinPerSoal = 10;
    const totalSoal = 10;
    const maxSkor = totalSoal * poinPerSoal;
    let jawabanBenarList = [];

    // Helper function to check answer
    const checkAnswer = (qName, correctText) => {
        const checkedAnswer = document.querySelector(`input[name="${qName}"]:checked`);
        if (checkedAnswer && checkedAnswer.value === 'benar') {
            skor += poinPerSoal;
            jawabanBenarList.push(correctText);
        }
    };

    // Soal 1: Elektrolisis
    checkAnswer('q1', 'Elektrolisis'); 
    // Soal 2: PLTB
    checkAnswer('q2', 'PLTB');
    // Soal 3: Intermiten (tidak stabil)
    checkAnswer('q3', 'Intermiten');
    // Soal 4: Hidrogen Hijau
    checkAnswer('q4', 'Hidrogen Hijau');
    // Soal 5: Baseload (dasar yang stabil)
    checkAnswer('q5', 'Baseload');
    // Soal 6: Batu Bara
    checkAnswer('q6', 'Batu Bara');
    // Soal 7: Penyimpanan Energi (ESS)
    checkAnswer('q7', 'Penyimpanan Energi (ESS)');
    // Soal 8: Geotermal
    checkAnswer('q8', 'Geotermal');
    // Soal 9: Karbon Dioksida
    checkAnswer('q9', 'Karbon Dioksida');
    // Soal 10: Menciptakan "Green Jobs"
    checkAnswer('q10', 'Menciptakan "Green Jobs"');

    document.getElementById('hasilQuiz').innerHTML = 
        `<strong>Nilai kamu: ${skor}/${maxSkor}</strong>. <br>
         Jawaban yang benar: ${jawabanBenarList.join(', ')}.`;
}

// Dark Mode
const toggle = document.getElementById('darkToggle');
toggle.addEventListener('click', () => {
    document.body.classList.toggle('dark');
    const isDark = document.body.classList.contains('dark');
    toggle.innerHTML = isDark ? '☀️ Mode Terang' : '🌙 Mode Gelap';
    // Simpan preferensi mode di localStorage
    localStorage.setItem('darkMode', isDark ? 'enabled' : 'disabled');
});

// Load Dark Mode Preference
if (localStorage.getItem('darkMode') === 'enabled') {
    document.body.classList.add('dark');
    toggle.innerHTML = '☀️ Mode Terang';
}