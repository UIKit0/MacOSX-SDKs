/*	NSAutoreleasePool.h
	Copyright (c) 1994-2003, Apple, Inc. All rights reserved.
*/

#import <Foundation/NSObject.h>

@interface NSAutoreleasePool : NSObject {
@private
    void	*_token;
    void	*_reserved3;
    void	*_reserved2;
    void	*_reserved;
}

+ (void)addObject:(id)anObject;

- (void)addObject:(id)anObject;

@end

