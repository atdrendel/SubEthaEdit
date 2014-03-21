//
//  SEEScopedBookmarkManager.h
//  SubEthaEdit
//
//  Created by Michael Ehrmann on 19.03.14.
//  Copyright (c) 2014 TheCodingMonkeys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SEEScopedBookmarkManager : NSObject

+ (instancetype)sharedManager;

- (BOOL)hasBookmarkForURL:(NSURL *)aURL;

- (BOOL)startAccessingURL:(NSURL *)aURL;
- (void)stopAccessingURL:(NSURL *)aURL;

@end
