//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Scott Monroe on 1/24/13.
//  Copyright (c) 2013 Scott Monroe. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BirdSighting;

@interface BirdSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;

- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;

- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
