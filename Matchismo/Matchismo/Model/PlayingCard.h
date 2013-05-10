//
//  PlayingCard.h
//  Matchismo
//
//  Created by Michał Filipiak on 02.04.2013.
//  Copyright (c) 2013 Michał Filipiak. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property(nonatomic) NSUInteger rank;
+(NSArray *)validSuits;
+(NSUInteger)maxRank;


@end
