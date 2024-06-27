import React from "react";
import "./Render_filmes.css";

function Render_filmes() {
  return (
    <>
      <div className="Render_filmes_Main">
        <div className="filme">
          <img
            className="filmeImagem"
            src="https://image.tmdb.org/t/p/original/cxevDYdeFkiixRShbObdwAHBZry.jpg"
          />
          <div className="InfosFilmes">
            <h1>RebelMoon</h1>
            <p>Ação</p>
          </div>
          <img />
          <div className="shadowMovie"></div>
        </div>
      </div>
    </>
  );
}

export default Render_filmes;
