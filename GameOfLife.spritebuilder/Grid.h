//
//  Grid.h
//  GameOfLife
//
//  Created by Martin Temmink on 07-11-14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"
@interface evolveStep
@end

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;


@end
