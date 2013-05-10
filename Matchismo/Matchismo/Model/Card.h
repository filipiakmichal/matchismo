//
//  Card.h
//  Matchismo
//
//  Created by Michał Filipiak on 02.04.2013.
//  Copyright (c) 2013 Michał Filipiak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic) NSString * contents;

@property (nonatomic, getter = isFaceUp) BOOL faceUp;
@property (nonatomic, getter = isUnplayable) BOOL unplayable;

-(int)match:(NSArray *)otherCards;

@end
