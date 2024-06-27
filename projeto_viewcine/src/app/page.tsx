import Render_filmes from "./components/Render_Filmes/Render_filmes";
import Categoria from "./components/categorias/Categoria";
import Header from "./components/header/Header";
import Main from "./components/main/Main";



export default function Home() {
  return (
    <>
      <Header/>
      <Main/>
      <Render_filmes/>
      <Categoria/>
    </>
  );
}
