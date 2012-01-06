//
//  DetailViewController.h
//  MasterDetailCocktails
//
//  Created by Dan on 07/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"
@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (nonatomic, retain) Recipe *recipe;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;

@end
