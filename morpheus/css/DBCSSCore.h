//
//  DBCSSCore.h
//  morpheus
//
//  Created by Andrey Moskvin on 01.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBCSSCore : NSObject

+(DBCSSCore*)sharedCore;
- (void)start;

@end
