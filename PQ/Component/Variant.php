<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;

class Variant extends Component {

    public function get(\QVariant $variant) {
        if($variant->isNull()) return null;
        $type = \QVariant::typeToName($variant->userType());
        return $variant->{'to'.str_replace('Q', '', $type)}();
    }
}