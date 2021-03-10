-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 10 Mar 2021, 10:01
-- Wersja serwera: 10.4.14-MariaDB
-- Wersja PHP: 7.4.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `hurtownia`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `towary`
--

CREATE TABLE `towary` (
  `id` int(11) NOT NULL,
  `nazwa` text COLLATE utf8_polish_ci NOT NULL,
  `cena` int(11) NOT NULL,
  `stan` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `towary`
--

INSERT INTO `towary` (`id`, `nazwa`, `cena`, `stan`) VALUES
(1, 'Pomarańcza Bergamota', 5, 1000),
(2, 'Pomarańcza zwykła', 4, 350),
(3, 'Cukier biały', 2, 2500),
(4, 'Skittles', 50, 5200),
(5, 'Zóbrówka Biała 0,5', 19, 2302),
(6, 'Cytryny', 5, 1234),
(7, 'Jajka', 3, 1334),
(8, 'Woda', 1, 2123),
(9, 'Piwo', 8, 412),
(10, 'Wino', 14, 723),
(11, 'Ser żółty', 6, 712),
(12, 'Ser biały', 7, 1434),
(13, 'Pomidory', 4, 1643),
(14, 'Cebula', 3, 1934),
(15, 'Ziemniaki', 3, 2544),
(16, 'Pieprz', 2, 3223),
(17, 'Sól', 2, 2123),
(18, 'Cola', 7, 433),
(19, 'Chipsy', 6, 162),
(20, 'Czekolada', 4, 132);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `towary`
--
ALTER TABLE `towary`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT dla tabeli `towary`
--
ALTER TABLE `towary`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
