import React from "react";
import "./Header.css";
import { FiSearch } from "react-icons/fi";

function Header() {
  return (
    <>
      <div className="HeaderMain">
        <h1 className="Logo">NIGHTCINE</h1>

        <div className="HeaderContents">
          <p>Filmes</p>
          <p>Séries</p>
          <p>Categorias</p>
          <p>
            <FiSearch />
          </p>
        </div>
      </div>
    </>
  );
}

export default Header;
