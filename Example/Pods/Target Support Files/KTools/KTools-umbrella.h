#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "KToolsHeader.h"
#import "KTools.h"
#import "KToolsMacro.h"
#import "NSDate+KCategory.h"
#import "NSError+KInfo.h"
#import "NSString+KBase64.h"
#import "NSString+KRegex.h"
#import "UIButton+KEdgeInsets.h"

FOUNDATION_EXPORT double KToolsVersionNumber;
FOUNDATION_EXPORT const unsigned char KToolsVersionString[];

