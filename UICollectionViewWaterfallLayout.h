//
//  UICollectionViewWaterfallLayout.h
//
//  Created by Nelson on 12/11/19.
//  Copyright (c) 2012 Nelson Tai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSTCollectionView.h"

@class UICollectionViewWaterfallLayout;
@protocol UICollectionViewDelegateWaterfallLayout <PSTCollectionViewDelegate>
- (CGFloat)collectionView:(PSTCollectionView *)collectionView
                   layout:(UICollectionViewWaterfallLayout *)collectionViewLayout
 heightForItemAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)heightOfHeaderCollectionView:(PSTCollectionView *)collectionView
                                 layout:(UICollectionViewWaterfallLayout *)collectionViewLayout;
@end

@interface UICollectionViewWaterfallLayout : PSTCollectionViewLayout
@property (nonatomic, weak) id<UICollectionViewDelegateWaterfallLayout> delegate;
@property (nonatomic, assign) NSUInteger columnCount; // How many columns
@property (nonatomic, assign) CGFloat itemWidth; // Width for every column
@property (nonatomic, assign) UIEdgeInsets sectionInset; // The margins used to lay out content in a section
@end
