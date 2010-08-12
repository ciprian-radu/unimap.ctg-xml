// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "core.hxx"

namespace core
{
  // coreType
  // 

  const coreType::ID_type& coreType::
  ID () const
  {
    return this->ID_.get ();
  }

  coreType::ID_type& coreType::
  ID ()
  {
    return this->ID_.get ();
  }

  void coreType::
  ID (const ID_type& x)
  {
    this->ID_.set (x);
  }

  void coreType::
  ID (::std::auto_ptr< ID_type > x)
  {
    this->ID_.set (x);
  }

  const coreType::name_optional& coreType::
  name () const
  {
    return this->name_;
  }

  coreType::name_optional& coreType::
  name ()
  {
    return this->name_;
  }

  void coreType::
  name (const name_type& x)
  {
    this->name_.set (x);
  }

  void coreType::
  name (const name_optional& x)
  {
    this->name_ = x;
  }

  void coreType::
  name (::std::auto_ptr< name_type > x)
  {
    this->name_.set (x);
  }

  const coreType::frequency_optional& coreType::
  frequency () const
  {
    return this->frequency_;
  }

  coreType::frequency_optional& coreType::
  frequency ()
  {
    return this->frequency_;
  }

  void coreType::
  frequency (const frequency_type& x)
  {
    this->frequency_.set (x);
  }

  void coreType::
  frequency (const frequency_optional& x)
  {
    this->frequency_ = x;
  }

  const coreType::width_optional& coreType::
  width () const
  {
    return this->width_;
  }

  coreType::width_optional& coreType::
  width ()
  {
    return this->width_;
  }

  void coreType::
  width (const width_type& x)
  {
    this->width_.set (x);
  }

  void coreType::
  width (const width_optional& x)
  {
    this->width_ = x;
  }

  const coreType::height_optional& coreType::
  height () const
  {
    return this->height_;
  }

  coreType::height_optional& coreType::
  height ()
  {
    return this->height_;
  }

  void coreType::
  height (const height_type& x)
  {
    this->height_.set (x);
  }

  void coreType::
  height (const height_optional& x)
  {
    this->height_ = x;
  }

  const coreType::idlePower_optional& coreType::
  idlePower () const
  {
    return this->idlePower_;
  }

  coreType::idlePower_optional& coreType::
  idlePower ()
  {
    return this->idlePower_;
  }

  void coreType::
  idlePower (const idlePower_type& x)
  {
    this->idlePower_.set (x);
  }

  void coreType::
  idlePower (const idlePower_optional& x)
  {
    this->idlePower_ = x;
  }

  const coreType::task_sequence& coreType::
  task () const
  {
    return this->task_;
  }

  coreType::task_sequence& coreType::
  task ()
  {
    return this->task_;
  }

  void coreType::
  task (const task_sequence& s)
  {
    this->task_ = s;
  }


  // taskType
  // 

  const taskType::type_type& taskType::
  type () const
  {
    return this->type_.get ();
  }

  taskType::type_type& taskType::
  type ()
  {
    return this->type_.get ();
  }

  void taskType::
  type (const type_type& x)
  {
    this->type_.set (x);
  }

  void taskType::
  type (::std::auto_ptr< type_type > x)
  {
    this->type_.set (x);
  }

  const taskType::execTime_optional& taskType::
  execTime () const
  {
    return this->execTime_;
  }

  taskType::execTime_optional& taskType::
  execTime ()
  {
    return this->execTime_;
  }

  void taskType::
  execTime (const execTime_type& x)
  {
    this->execTime_.set (x);
  }

  void taskType::
  execTime (const execTime_optional& x)
  {
    this->execTime_ = x;
  }

  void taskType::
  execTime (::std::auto_ptr< execTime_type > x)
  {
    this->execTime_.set (x);
  }

  const taskType::power_optional& taskType::
  power () const
  {
    return this->power_;
  }

  taskType::power_optional& taskType::
  power ()
  {
    return this->power_;
  }

  void taskType::
  power (const power_type& x)
  {
    this->power_.set (x);
  }

  void taskType::
  power (const power_optional& x)
  {
    this->power_ = x;
  }

  void taskType::
  power (::std::auto_ptr< power_type > x)
  {
    this->power_.set (x);
  }


  // execTime
  // 


  // power
  // 
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace core
{
  // coreType
  //

  coreType::
  coreType (const ID_type& ID)
  : ::xml_schema::type (),
    ID_ (ID, ::xml_schema::flags (), this),
    name_ (::xml_schema::flags (), this),
    frequency_ (::xml_schema::flags (), this),
    width_ (::xml_schema::flags (), this),
    height_ (::xml_schema::flags (), this),
    idlePower_ (::xml_schema::flags (), this),
    task_ (::xml_schema::flags (), this)
  {
  }

  coreType::
  coreType (const coreType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    ID_ (x.ID_, f, this),
    name_ (x.name_, f, this),
    frequency_ (x.frequency_, f, this),
    width_ (x.width_, f, this),
    height_ (x.height_, f, this),
    idlePower_ (x.idlePower_, f, this),
    task_ (x.task_, f, this)
  {
  }

  coreType::
  coreType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    ID_ (f, this),
    name_ (f, this),
    frequency_ (f, this),
    width_ (f, this),
    height_ (f, this),
    idlePower_ (f, this),
    task_ (f, this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
      this->parse (p, f);
    }
  }

  void coreType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // ID
      //
      if (n.name () == "ID" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< ID_type > r (
          ID_traits::create (i, f, this));

        if (!ID_.present ())
        {
          this->ID_.set (r);
          continue;
        }
      }

      // name
      //
      if (n.name () == "name" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< name_type > r (
          name_traits::create (i, f, this));

        if (!this->name_)
        {
          this->name_.set (r);
          continue;
        }
      }

      // frequency
      //
      if (n.name () == "frequency" && n.namespace_ ().empty ())
      {
        if (!this->frequency_)
        {
          this->frequency_.set (frequency_traits::create (i, f, this));
          continue;
        }
      }

      // width
      //
      if (n.name () == "width" && n.namespace_ ().empty ())
      {
        if (!this->width_)
        {
          this->width_.set (width_traits::create (i, f, this));
          continue;
        }
      }

      // height
      //
      if (n.name () == "height" && n.namespace_ ().empty ())
      {
        if (!this->height_)
        {
          this->height_.set (height_traits::create (i, f, this));
          continue;
        }
      }

      // idlePower
      //
      if (n.name () == "idlePower" && n.namespace_ ().empty ())
      {
        if (!this->idlePower_)
        {
          this->idlePower_.set (idlePower_traits::create (i, f, this));
          continue;
        }
      }

      // task
      //
      if (n.name () == "task" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< task_type > r (
          task_traits::create (i, f, this));

        this->task_.push_back (r);
        continue;
      }

      break;
    }

    if (!ID_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "ID",
        "");
    }
  }

  coreType* coreType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class coreType (*this, f, c);
  }

  coreType::
  ~coreType ()
  {
  }

  // taskType
  //

  taskType::
  taskType (const type_type& type)
  : ::xml_schema::type (),
    type_ (type, ::xml_schema::flags (), this),
    execTime_ (::xml_schema::flags (), this),
    power_ (::xml_schema::flags (), this)
  {
  }

  taskType::
  taskType (const taskType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    type_ (x.type_, f, this),
    execTime_ (x.execTime_, f, this),
    power_ (x.power_, f, this)
  {
  }

  taskType::
  taskType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    type_ (f, this),
    execTime_ (f, this),
    power_ (f, this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
      this->parse (p, f);
    }
  }

  void taskType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "type" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< type_type > r (
          type_traits::create (i, f, this));

        this->type_.set (r);
        continue;
      }

      if (n.name () == "execTime" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< execTime_type > r (
          execTime_traits::create (i, f, this));

        this->execTime_.set (r);
        continue;
      }

      if (n.name () == "power" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< power_type > r (
          power_traits::create (i, f, this));

        this->power_.set (r);
        continue;
      }
    }

    if (!type_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "type",
        "");
    }
  }

  taskType* taskType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class taskType (*this, f, c);
  }

  taskType::
  ~taskType ()
  {
  }

  // execTime
  //

  execTime::
  execTime (const ::xml_schema::double_& _xsd_double__base)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (_xsd_double__base)
  {
  }

  execTime::
  execTime (const execTime& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (x, f, c)
  {
  }

  execTime::
  execTime (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (e, f, c)
  {
  }

  execTime::
  execTime (const ::xercesc::DOMAttr& a,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (a, f, c)
  {
  }

  execTime::
  execTime (const ::std::string& s,
            const ::xercesc::DOMElement* e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (s, e, f, c)
  {
  }

  execTime* execTime::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class execTime (*this, f, c);
  }

  execTime::
  ~execTime ()
  {
  }

  // power
  //

  power::
  power (const ::xml_schema::double_& _xsd_double__base)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (_xsd_double__base)
  {
  }

  power::
  power (const power& x,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (x, f, c)
  {
  }

  power::
  power (const ::xercesc::DOMElement& e,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (e, f, c)
  {
  }

  power::
  power (const ::xercesc::DOMAttr& a,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (a, f, c)
  {
  }

  power::
  power (const ::std::string& s,
         const ::xercesc::DOMElement* e,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
  : ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ > (s, e, f, c)
  {
  }

  power* power::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class power (*this, f, c);
  }

  power::
  ~power ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace core
{
  ::std::auto_ptr< ::core::coreType >
  core (const ::std::string& u,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    ::std::auto_ptr< ::core::coreType > r (
      ::core::core (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::core::coreType >
  core (const ::std::string& u,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::core::coreType > r (
      ::core::core (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::core::coreType >
  core (const ::std::string& u,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::core::coreType > r (
      ::core::core (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::core::coreType >
  core (::std::istream& is,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::core::core (isrc, f, p);
  }

  ::std::auto_ptr< ::core::coreType >
  core (::std::istream& is,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::core::core (isrc, h, f, p);
  }

  ::std::auto_ptr< ::core::coreType >
  core (::std::istream& is,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::core::core (isrc, h, f, p);
  }

  ::std::auto_ptr< ::core::coreType >
  core (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::core::core (isrc, f, p);
  }

  ::std::auto_ptr< ::core::coreType >
  core (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::core::core (isrc, h, f, p);
  }

  ::std::auto_ptr< ::core::coreType >
  core (::std::istream& is,
        const ::std::string& sid,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::core::core (isrc, h, f, p);
  }

  ::std::auto_ptr< ::core::coreType >
  core (::xercesc::InputSource& i,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    ::std::auto_ptr< ::core::coreType > r (
      ::core::core (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::core::coreType >
  core (::xercesc::InputSource& i,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::core::coreType > r (
      ::core::core (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::core::coreType >
  core (::xercesc::InputSource& i,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::core::coreType > r (
      ::core::core (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::core::coreType >
  core (const ::xercesc::DOMDocument& d,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    if (f & ::xml_schema::flags::keep_dom)
    {
      ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
        static_cast< ::xercesc::DOMDocument* > (d.cloneNode (true)));

      ::std::auto_ptr< ::core::coreType > r (
        ::core::core (
          c, f | ::xml_schema::flags::own_dom, p));

      return r;
    }

    const ::xercesc::DOMElement& e (*d.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "core" &&
        n.namespace_ () == "http://www.example.org/core")
    {
      ::std::auto_ptr< ::core::coreType > r (
        ::xsd::cxx::tree::traits< ::core::coreType, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "core",
      "http://www.example.org/core");
  }

  ::std::auto_ptr< ::core::coreType >
  core (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
        ::xml_schema::flags f,
        const ::xml_schema::properties&)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
      ((f & ::xml_schema::flags::keep_dom) &&
       !(f & ::xml_schema::flags::own_dom))
      ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
      : 0);

    ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (f & ::xml_schema::flags::keep_dom)
      doc.setUserData (::xml_schema::dom::tree_node_key,
                       (c.get () ? &c : &d),
                       0);

    if (n.name () == "core" &&
        n.namespace_ () == "http://www.example.org/core")
    {
      ::std::auto_ptr< ::core::coreType > r (
        ::xsd::cxx::tree::traits< ::core::coreType, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "core",
      "http://www.example.org/core");
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

namespace core
{
  void
  operator<< (::xercesc::DOMElement& e, const coreType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // ID
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "ID",
          e));

      s << i.ID ();
    }

    // name
    //
    if (i.name ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "name",
          e));

      s << *i.name ();
    }

    // frequency
    //
    if (i.frequency ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "frequency",
          e));

      s << ::xml_schema::as_double(*i.frequency ());
    }

    // width
    //
    if (i.width ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "width",
          e));

      s << ::xml_schema::as_double(*i.width ());
    }

    // height
    //
    if (i.height ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "height",
          e));

      s << ::xml_schema::as_double(*i.height ());
    }

    // idlePower
    //
    if (i.idlePower ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "idlePower",
          e));

      s << ::xml_schema::as_double(*i.idlePower ());
    }

    // task
    //
    for (coreType::task_const_iterator
         b (i.task ().begin ()), n (i.task ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "task",
          e));

      s << *b;
    }
  }

  void
  core (::std::ostream& o,
        const ::core::coreType& s,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::core::core (s, m, f));

    ::xsd::cxx::tree::error_handler< char > h;

    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
    }
  }

  void
  core (::std::ostream& o,
        const ::core::coreType& s,
        ::xml_schema::error_handler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::core::core (s, m, f));
    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  core (::std::ostream& o,
        const ::core::coreType& s,
        ::xercesc::DOMErrorHandler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::core::core (s, m, f));
    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  core (::xercesc::XMLFormatTarget& t,
        const ::core::coreType& s,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::core::core (s, m, f));

    ::xsd::cxx::tree::error_handler< char > h;

    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
    }
  }

  void
  core (::xercesc::XMLFormatTarget& t,
        const ::core::coreType& s,
        ::xml_schema::error_handler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::core::core (s, m, f));
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  core (::xercesc::XMLFormatTarget& t,
        const ::core::coreType& s,
        ::xercesc::DOMErrorHandler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::core::core (s, m, f));
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  core (::xercesc::DOMDocument& d,
        const ::core::coreType& s,
        ::xml_schema::flags)
  {
    ::xercesc::DOMElement& e (*d.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "core" &&
        n.namespace_ () == "http://www.example.org/core")
    {
      e << s;
    }
    else
    {
      throw ::xsd::cxx::tree::unexpected_element < char > (
        n.name (),
        n.namespace_ (),
        "core",
        "http://www.example.org/core");
    }
  }

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
  core (const ::core::coreType& s,
        const ::xml_schema::namespace_infomap& m,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::serialize< char > (
        "core",
        "http://www.example.org/core",
        m, f));

    ::core::core (*d, s, f);
    return d;
  }

  void
  operator<< (::xercesc::DOMElement& e, const taskType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // type
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "type",
          e));

      a << i.type ();
    }

    // execTime
    //
    if (i.execTime ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "execTime",
          e));

      a << *i.execTime ();
    }

    // power
    //
    if (i.power ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "power",
          e));

      a << *i.power ();
    }
  }

  void
  operator<< (::xercesc::DOMElement& e, const execTime& i)
  {
    e << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ >& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const execTime& i)
  {
    a << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ >& > (i);
  }

  void
  operator<< (::xml_schema::list_stream& l,
              const execTime& i)
  {
    l << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ >& > (i);
  }

  void
  operator<< (::xercesc::DOMElement& e, const power& i)
  {
    e << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ >& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const power& i)
  {
    a << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ >& > (i);
  }

  void
  operator<< (::xml_schema::list_stream& l,
              const power& i)
  {
    l << static_cast< const ::xsd::cxx::tree::fundamental_base< ::xml_schema::double_, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::double_ >& > (i);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

