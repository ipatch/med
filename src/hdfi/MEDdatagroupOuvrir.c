/*  This file is part of MED.
 *
 *  COPYRIGHT (C) 1999 - 2021  EDF R&D, CEA/DEN
 *  MED is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  MED is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with MED.  If not, see <http://www.gnu.org/licenses/>.
 */



#include <med.h>
#include <med_config.h>
#include <med_outils.h>
#include <hdf5.h>

/*
 * - Nom de la fonction : _MEDdatagroupOuvrir
 * - Description : ouverture d'un datagroup HDF
 * - Parametres :
 *     - pid     (IN)    : l'ID de l'objet pere
 *     - nom     (IN)    : le nom de l'objet fils
 * - Resultat : l'ID du fils en cas de succes, -1 sinon
 */ 
med_idt
_MEDdatagroupOuvrir(med_idt pid, const char * const nom)
{
  med_idt id;

  if ((id = H5Gopen(pid,nom)) < 0)
    return -1;

  return id;
}
