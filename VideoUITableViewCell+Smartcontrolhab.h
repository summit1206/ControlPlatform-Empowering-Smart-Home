#import "GenericUITableViewCell.h"
#import <MediaPlayer/MediaPlayer.h>
#import "VideoUITableViewCell.h"

@interface VideoUITableViewCell (Smartcontrolhab)
- (void)loadWidget:(OpenHABWidget *)widgetToLoad smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)setFrame:(CGRect)frame smartcontrolHab:(NSString *)smartcontrolHab;

@end
