//
//  MasterViewController.h
//  MasterDetailCocktails
//
//  Created by Dan on 07/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"
@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) DetailViewController *anotherDetailViewController;
@property (nonatomic, retain) NSMutableArray *recipeArray;
@property (nonatomic, retain) Recipe *recipe;

@end
