//
//  TZPhotoPickerController.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TZAlbumModel;
@class TZPhotoPreviewController;
@interface TZPhotoPickerController : UIViewController{
    NSMutableArray *_models;
}

@property (nonatomic, assign) BOOL isFirstAppear;
@property (nonatomic, assign) NSInteger columnNumber;
@property (nonatomic, strong) TZAlbumModel *model;

- (void)pushPhotoPrevireViewController:(TZPhotoPreviewController *)photoPreviewVc;
- (void)pushExchangePhotoPrevireVC:(NSInteger)index;
@end


@interface TZCollectionView : UICollectionView

@end
