//
//  Recipe.h
//  MasterDetailCocktails
//
//  Created by Dan on 07/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *instructions;
@property (nonatomic, retain) UIImage *image;

@end
