#import <Cocoa/Cocoa.h>
#import <ScriptingBridge/ScriptingBridge.h>

#import "SBApplicationExtensions.h"

@interface SBApplication (QuietExtensions)

+ (id) quietApplicationWithBundleIdentifier: (NSString *) ident;

@end
