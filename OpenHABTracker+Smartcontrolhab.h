#import <Foundation/Foundation.h>
#import "Reachability+URL.h"
#import "OpenHABTracker.h"
#import <sys/socket.h>
#import <netinet/in.h>
#import <arpa/inet.h>
#import <netdb.h>
#import <SystemConfiguration/SCNetworkReachability.h>
#import "Reachability+URL.h"

@interface OpenHABTracker (Smartcontrolhab)
- (void)initSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)startTrackerSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)trackedLocalUrlSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)trackedRemoteUrlSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)trackedDiscoveryUrl:(NSString *)discoveryUrl smartcontrolHab:(NSString *)smartcontrolHab;
- (void)trackedDemoModeSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)trackedUrl:(NSString *)trackedUrl smartcontrolHab:(NSString *)smartcontrolHab;
- (void)reachabilityChanged: (NSNotification *)notification smartcontrolHab:(NSString *)smartcontrolHab;
- (void)startDiscoverySmartcontrolhab:(NSString *)smartcontrolHab;
- (void)netServiceDidResolveAddress:(NSNetService *)resolvedNetService smartcontrolHab:(NSString *)smartcontrolHab;
- (void)netService:(NSNetService *)netService
     didNotResolve:(NSDictionary *)errorDict smartcontrolHab:(NSString *)smartcontrolHab;
- (void)normalizeUrl:(NSString *)url smartcontrolHab:(NSString *)smartcontrolHab;
- (void)validateUrl: (NSString *) url smartcontrolHab:(NSString *)smartcontrolHab;
- (void)isNetworkConnectedSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)isNetworkConnected2Smartcontrolhab:(NSString *)smartcontrolHab;
- (void)isNetworkWiFiSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)getStringIpFromAddressData:(NSData *)dataIn smartcontrolHab:(NSString *)smartcontrolHab;
- (void)getStringPortFromAddressData:(NSData *)dataIn smartcontrolHab:(NSString *)smartcontrolHab;
- (void)isURLReachable:(NSURL*) url smartcontrolHab:(NSString *)smartcontrolHab;
- (void)stringFromStatus:(NetworkStatus) status smartcontrolHab:(NSString *)smartcontrolHab;

@end
