#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <netinet/in.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import <sys/socket.h>
#import <CoreFoundation/CoreFoundation.h>
#import "Reachability.h"

@interface Reachability (Smartcontrolhab)
+ (void)reachabilityWithHostName:(NSString *)hostName smartcontrolHab:(NSString *)smartcontrolHab;
+ (void)reachabilityWithAddress:(const struct sockaddr_in *)hostAddress smartcontrolHab:(NSString *)smartcontrolHab;
+ (void)reachabilityForInternetConnectionSmartcontrolhab:(NSString *)smartcontrolHab;
+ (void)reachabilityForLocalWiFiSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)startNotifierSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)stopNotifierSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)deallocSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)localWiFiStatusForFlags:(SCNetworkReachabilityFlags)flags smartcontrolHab:(NSString *)smartcontrolHab;
- (void)networkStatusForFlags:(SCNetworkReachabilityFlags)flags smartcontrolHab:(NSString *)smartcontrolHab;
- (void)connectionRequiredSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)currentReachabilityStatusSmartcontrolhab:(NSString *)smartcontrolHab;

@end
