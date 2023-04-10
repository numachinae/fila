///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/15/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_SEMAPHORE_MAIN_HPP
#define XOS_APP_CONSOLE_SEMAPHORE_MAIN_HPP

#include "xos/app/console/semaphore/main_opt.hpp"
#include "xos/mt/microsoft/windows/semaphore.hpp"
#include "xos/mt/apple/osx/semaphore.hpp"
#include "xos/mt/oracle/solaris/semaphore.hpp"
#include "xos/mt/mach/semaphore.hpp"
#include "xos/mt/linux/semaphore.hpp"
#include "xos/mt/posix/semaphore.hpp"
#include "xos/mt/os/semaphore.hpp"
#include "xos/mt/semaphore.hpp"

namespace xos {
namespace app {
namespace console {
namespace semaphore {

/// class maint
template 
<class TExtends = xos::app::console::semaphore::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    virtual int windows_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::microsoft::windows::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::microsoft::windows::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::microsoft::windows::semaphore >()", NULL);
        return err;
    }
    virtual int osx_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::apple::osx::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::apple::osx::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::apple::osx::semaphore >()", NULL);
        return err;
    }
    virtual int solaris_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::oracle::solaris::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::oracle::solaris::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = ", NULL);
        return err;
    }
    virtual int mach_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::mach::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::mach::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::mach::semaphore >()", NULL);
        return err;
    }
    virtual int linux_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "his->template run< ::xos::mt::linux::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::linux::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::linux::semaphore >()", NULL);
        return err;
    }
    virtual int posix_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::posix::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::posix::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::posix::semaphore >()", NULL);
        return err;
    }
    virtual int os_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::os::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::os::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::os::semaphore >()", NULL);
        return err;
    }
    virtual int none_run(int argc, char_t** argv, char_t** env) {
        this->outlln(__LOCATION__, "this->template run< ::xos::mt::derived::semaphore >()...", NULL);
        int err = this->template run< ::xos::mt::derived::semaphore >();
        this->outlln(__LOCATION__, "...", signed_to_string(err).chars(), " = this->template run< ::xos::mt::derived::semaphore >()", NULL);
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace semaphore
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_SEMAPHORE_MAIN_HPP