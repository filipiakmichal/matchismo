//
//  PlayingCard.m
//  Matchismo
//
//  Created by Michał Filipiak on 02.04.2013.
//  Copyright (c) 2013 Michał Filipiak. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard


- (NSString *)contents
{
    return [[PlayingCard rankStrings][self.rank] stringByAppendingString:self.suit];
}

@synthesize suit=_suit;

+(NSArray *)validSuits
{
    static NSArray *validSuits = nil;
    if (!validSuits) validSuits = @[@"♥",@"♦",@"♠",@"♣"];
    return validSuits;
}

-(void)setSuit:(NSString *)suit
{
    if([[PlayingCard validSuits]containsObject:suit]){
        _suit = suit;
    }
}

-(NSString *)suit
{
    return _suit ? _suit :@"?";
}

+(NSArray *)rankStrings
{
    return @[@"?",@"A",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",@"J",@"Q",@"K"];
    
}

+ (NSUInteger)maxRank { return [self rankStrings].count-1;}

-(void)setRank:(NSUInteger)rank
{
    if (rank <= [PlayingCard maxRank]) {
        _rank = rank;
    
    }
}
@end
