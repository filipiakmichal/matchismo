//
//  Deck.h
//  Matchismo
//
//  Created by Michał Filipiak on 02.04.2013.
//  Copyright (c) 2013 Michał Filipiak. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

-(void)addCard:(Card *) card atTop:(BOOL)atTop;

-(Card *)drawRandomCard;
@end
