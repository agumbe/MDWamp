//
//  MDWampPublish.h
//  MDWamp
//
//  Created by Niko Usai on 10/04/14.
//  Copyright (c) 2014 mogui.it. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDWampMessage.h"
// [PUBLISH, Request|id, Options|dict, Topic|uri, Arguments|list, ArgumentsKw|dict]

@interface MDWampPublish : NSObject<MDWampMessage>
@property (nonatomic, strong) NSNumber *request;
@property (nonatomic, strong) NSDictionary *options;
@property (nonatomic, strong) NSString *topic;
@property (nonatomic, strong) NSArray *arguments;
@property (nonatomic, strong) NSDictionary *argumentsKw;
@property (nonatomic, assign) NSDictionary *event;
@end