#import "GenericUITableViewCell.h"
#import "WebUITableViewCell.h"

@interface WebUITableViewCell (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)loadWidget:(OpenHABWidget *)widgetToLoad smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)webViewDidStartLoad:(UIWebView *)webView smartcontrolHab:(NSString *)smartcontrolHab;
- (void)webViewDidFinishLoad:(UIWebView *)webView smartcontrolHab:(NSString *)smartcontrolHab;
- (void)setFrame:(CGRect)frame smartcontrolHab:(NSString *)smartcontrolHab;

@end
