<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                09.60.2016
 * @version             1.0
 * @copyright           artmares@influ.su
 */

//echo __DIR__;
require_once(__DIR__.'/PQFiles/PQFile.php');
require_once(__DIR__.'/PQFiles/Data/PQSYS.php');
require_once(__DIR__.'/PQFiles/PQFileWorker.php');

/**
 * Class PQSFile
 * @property        PQSYS       $PQFile     Объект PQSYS
 * @property                    $QDir       Объект QDir расширения PQEngine File System
 * @property                    $QFile      Объект QFile расширения PQEngine File System
 * @property        string      $path       Путь к файлу .pqs
 *
 * Класс обертка для работы с файлами расширения .pqsys
 */
class PQSYSFile extends PQFileWorker {

	/**
	 * Выполняет проверку переданых данных и вызывает соответствующий метод
	 * @param $data - Данные из файла .pqsys
	 */
	protected function check($data) {
		if(!is_null($data) && !empty($data)) {
			if($this->isPQ($data)) $this->rebuild($data);
		}
	}
}