const ScreenController = (() => {
    function select(e) {
        removeSelected();

        e.target.classList.add('selected');
        showCode(e.target.id);
    }

    function removeSelected() {
        const selected = document.querySelectorAll('.selected');

        selected.forEach(item => {
            item.classList.remove('selected');
        });
    }

    function showCode(pNumber) {
        let filePath = "source-code/ctsd-1/p_" + pNumber + ".c";
        document.getElementById('display-code').src = filePath;
    }

    const init = () => {
        const arrOfLi = document.querySelectorAll('ol li');

        arrOfLi.forEach(li => {
            li.addEventListener('click', select);
        });
    }

    return { init };

})().init();

