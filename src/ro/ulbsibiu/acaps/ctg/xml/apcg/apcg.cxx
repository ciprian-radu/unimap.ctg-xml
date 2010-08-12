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

#include "apcg.hxx"

namespace apcg
{
  // apcgType
  // 

  const apcgType::core_sequence& apcgType::
  core () const
  {
    return this->core_;
  }

  apcgType::core_sequence& apcgType::
  core ()
  {
    return this->core_;
  }

  void apcgType::
  core (const core_sequence& s)
  {
    this->core_ = s;
  }

  const apcgType::id_type& apcgType::
  id () const
  {
    return this->id_.get ();
  }

  apcgType::id_type& apcgType::
  id ()
  {
    return this->id_.get ();
  }

  void apcgType::
  id (const id_type& x)
  {
    this->id_.set (x);
  }

  void apcgType::
  id (::std::auto_ptr< id_type > x)
  {
    this->id_.set (x);
  }

  const apcgType::ctg_type& apcgType::
  ctg () const
  {
    return this->ctg_.get ();
  }

  apcgType::ctg_type& apcgType::
  ctg ()
  {
    return this->ctg_.get ();
  }

  void apcgType::
  ctg (const ctg_type& x)
  {
    this->ctg_.set (x);
  }

  void apcgType::
  ctg (::std::auto_ptr< ctg_type > x)
  {
    this->ctg_.set (x);
  }


  // coreType
  // 

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

  const coreType::id_type& coreType::
  id () const
  {
    return this->id_.get ();
  }

  coreType::id_type& coreType::
  id ()
  {
    return this->id_.get ();
  }

  void coreType::
  id (const id_type& x)
  {
    this->id_.set (x);
  }

  void coreType::
  id (::std::auto_ptr< id_type > x)
  {
    this->id_.set (x);
  }


  // taskType
  // 

  const taskType::id_type& taskType::
  id () const
  {
    return this->id_.get ();
  }

  taskType::id_type& taskType::
  id ()
  {
    return this->id_.get ();
  }

  void taskType::
  id (const id_type& x)
  {
    this->id_.set (x);
  }

  void taskType::
  id (::std::auto_ptr< id_type > x)
  {
    this->id_.set (x);
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

namespace apcg
{
  // apcgType
  //

  apcgType::
  apcgType (const id_type& id,
            const ctg_type& ctg)
  : ::xml_schema::type (),
    core_ (::xml_schema::flags (), this),
    id_ (id, ::xml_schema::flags (), this),
    ctg_ (ctg, ::xml_schema::flags (), this)
  {
  }

  apcgType::
  apcgType (const apcgType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    core_ (x.core_, f, this),
    id_ (x.id_, f, this),
    ctg_ (x.ctg_, f, this)
  {
  }

  apcgType::
  apcgType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    core_ (f, this),
    id_ (f, this),
    ctg_ (f, this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
      this->parse (p, f);
    }
  }

  void apcgType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // core
      //
      if (n.name () == "core" && n.namespace_ () == "http://www.example.org/apcg")
      {
        ::std::auto_ptr< core_type > r (
          core_traits::create (i, f, this));

        this->core_.push_back (r);
        continue;
      }

      break;
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "id" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< id_type > r (
          id_traits::create (i, f, this));

        this->id_.set (r);
        continue;
      }

      if (n.name () == "ctg" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< ctg_type > r (
          ctg_traits::create (i, f, this));

        this->ctg_.set (r);
        continue;
      }
    }

    if (!id_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "id",
        "");
    }

    if (!ctg_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "ctg",
        "");
    }
  }

  apcgType* apcgType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class apcgType (*this, f, c);
  }

  apcgType::
  ~apcgType ()
  {
  }

  // coreType
  //

  coreType::
  coreType (const id_type& id)
  : ::xml_schema::type (),
    task_ (::xml_schema::flags (), this),
    id_ (id, ::xml_schema::flags (), this)
  {
  }

  coreType::
  coreType (const coreType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    task_ (x.task_, f, this),
    id_ (x.id_, f, this)
  {
  }

  coreType::
  coreType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    task_ (f, this),
    id_ (f, this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
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

      // task
      //
      if (n.name () == "task" && n.namespace_ () == "http://www.example.org/apcg")
      {
        ::std::auto_ptr< task_type > r (
          task_traits::create (i, f, this));

        this->task_.push_back (r);
        continue;
      }

      break;
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "id" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< id_type > r (
          id_traits::create (i, f, this));

        this->id_.set (r);
        continue;
      }
    }

    if (!id_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "id",
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
  taskType (const id_type& id)
  : ::xml_schema::type (),
    id_ (id, ::xml_schema::flags (), this),
    execTime_ (::xml_schema::flags (), this),
    power_ (::xml_schema::flags (), this)
  {
  }

  taskType::
  taskType (const taskType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    id_ (x.id_, f, this),
    execTime_ (x.execTime_, f, this),
    power_ (x.power_, f, this)
  {
  }

  taskType::
  taskType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    id_ (f, this),
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

      if (n.name () == "id" && n.namespace_ ().empty ())
      {
        ::std::auto_ptr< id_type > r (
          id_traits::create (i, f, this));

        this->id_.set (r);
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

    if (!id_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "id",
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

namespace apcg
{
  ::std::auto_ptr< ::apcg::apcgType >
  apcg (const ::std::string& u,
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

    ::std::auto_ptr< ::apcg::apcgType > r (
      ::apcg::apcg (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (const ::std::string& u,
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

    ::std::auto_ptr< ::apcg::apcgType > r (
      ::apcg::apcg (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (const ::std::string& u,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::apcg::apcgType > r (
      ::apcg::apcg (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::std::istream& is,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::apcg::apcg (isrc, f, p);
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::std::istream& is,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::apcg::apcg (isrc, h, f, p);
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::std::istream& is,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::apcg::apcg (isrc, h, f, p);
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::apcg::apcg (isrc, f, p);
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::apcg::apcg (isrc, h, f, p);
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::std::istream& is,
        const ::std::string& sid,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::apcg::apcg (isrc, h, f, p);
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::xercesc::InputSource& i,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    ::std::auto_ptr< ::apcg::apcgType > r (
      ::apcg::apcg (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::xercesc::InputSource& i,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::apcg::apcgType > r (
      ::apcg::apcg (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::xercesc::InputSource& i,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    ::std::auto_ptr< ::apcg::apcgType > r (
      ::apcg::apcg (
        d, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (const ::xercesc::DOMDocument& d,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    if (f & ::xml_schema::flags::keep_dom)
    {
      ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
        static_cast< ::xercesc::DOMDocument* > (d.cloneNode (true)));

      ::std::auto_ptr< ::apcg::apcgType > r (
        ::apcg::apcg (
          c, f | ::xml_schema::flags::own_dom, p));

      return r;
    }

    const ::xercesc::DOMElement& e (*d.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "apcg" &&
        n.namespace_ () == "http://www.example.org/apcg")
    {
      ::std::auto_ptr< ::apcg::apcgType > r (
        ::xsd::cxx::tree::traits< ::apcg::apcgType, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "apcg",
      "http://www.example.org/apcg");
  }

  ::std::auto_ptr< ::apcg::apcgType >
  apcg (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
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

    if (n.name () == "apcg" &&
        n.namespace_ () == "http://www.example.org/apcg")
    {
      ::std::auto_ptr< ::apcg::apcgType > r (
        ::xsd::cxx::tree::traits< ::apcg::apcgType, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "apcg",
      "http://www.example.org/apcg");
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

namespace apcg
{
  void
  operator<< (::xercesc::DOMElement& e, const apcgType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // core
    //
    for (apcgType::core_const_iterator
         b (i.core ().begin ()), n (i.core ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "core",
          "http://www.example.org/apcg",
          e));

      s << *b;
    }

    // id
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "id",
          e));

      a << i.id ();
    }

    // ctg
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "ctg",
          e));

      a << i.ctg ();
    }
  }

  void
  apcg (::std::ostream& o,
        const ::apcg::apcgType& s,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::apcg::apcg (s, m, f));

    ::xsd::cxx::tree::error_handler< char > h;

    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
    }
  }

  void
  apcg (::std::ostream& o,
        const ::apcg::apcgType& s,
        ::xml_schema::error_handler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::apcg::apcg (s, m, f));
    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  apcg (::std::ostream& o,
        const ::apcg::apcgType& s,
        ::xercesc::DOMErrorHandler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::apcg::apcg (s, m, f));
    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  apcg (::xercesc::XMLFormatTarget& t,
        const ::apcg::apcgType& s,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::apcg::apcg (s, m, f));

    ::xsd::cxx::tree::error_handler< char > h;

    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
    }
  }

  void
  apcg (::xercesc::XMLFormatTarget& t,
        const ::apcg::apcgType& s,
        ::xml_schema::error_handler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::apcg::apcg (s, m, f));
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  apcg (::xercesc::XMLFormatTarget& t,
        const ::apcg::apcgType& s,
        ::xercesc::DOMErrorHandler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::apcg::apcg (s, m, f));
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  apcg (::xercesc::DOMDocument& d,
        const ::apcg::apcgType& s,
        ::xml_schema::flags)
  {
    ::xercesc::DOMElement& e (*d.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "apcg" &&
        n.namespace_ () == "http://www.example.org/apcg")
    {
      e << s;
    }
    else
    {
      throw ::xsd::cxx::tree::unexpected_element < char > (
        n.name (),
        n.namespace_ (),
        "apcg",
        "http://www.example.org/apcg");
    }
  }

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
  apcg (const ::apcg::apcgType& s,
        const ::xml_schema::namespace_infomap& m,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::serialize< char > (
        "apcg",
        "http://www.example.org/apcg",
        m, f));

    ::apcg::apcg (*d, s, f);
    return d;
  }

  void
  operator<< (::xercesc::DOMElement& e, const coreType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // task
    //
    for (coreType::task_const_iterator
         b (i.task ().begin ()), n (i.task ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "task",
          "http://www.example.org/apcg",
          e));

      s << *b;
    }

    // id
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "id",
          e));

      a << i.id ();
    }
  }

  void
  operator<< (::xercesc::DOMElement& e, const taskType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // id
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "id",
          e));

      a << i.id ();
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

