//
//  MasterViewController.h
//  Cukrzyca
//
//  Created by Maciej Szewczyk on 17.03.2013.
//  Copyright (c) 2013 Maciej Szewczyk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
