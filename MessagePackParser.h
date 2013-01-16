//
//  MessagePackParser.h
//  Fetch TV Remote
//
//  Created by Chris Hulbert on 23/06/11.
//  Copyright 2011 Digital Five. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MessagePackParser : NSObject

+ (id)parseData:(NSData*)data;

- (id)init;
- (id)initWithBufferSize:(int)bufferSize;
- (void)feed:(NSData*)rawData;
- (id)next;

@end
