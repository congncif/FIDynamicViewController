//
//  FIDynamicAction.h
//  FIDynamicViewController
//
//  Created by NGUYEN CHI CONG on 8/17/15.
//  Copyright (c) 2015 NGUYEN CHI CONG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FIDynamicAction : NSObject

@property (nonatomic, strong) NSString *selector;
@property (nonatomic, strong) id object;
@property (nonatomic) BOOL performOnBackground;

@end
