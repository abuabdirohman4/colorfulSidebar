//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class NSButton, NSView, TImageView, TTextField, TView;

@interface TICloudNoDocumentsViewController : TViewController
{
    TImageView *_cloudAndAppImageView;
    TView *_cloudAndAppView;
    TImageView *_cloudImageView;
    TImageView *_appIconImageView;
    TTextField *_appInfoTextFld;
    TTextField *_explanationTextFld;
    NSButton *_upgradeButton;
    struct TFENode _target;
    struct TNSRef<NSMetadataQuery, void> _boostingQuery;
    _Bool _isUpgradeToICloudUI;
}

@property(readonly, nonatomic) struct TFENode target; // @synthesize target=_target;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)upgradeToiCloudDrive:(id)arg1;
- (void)learnAboutICloudBtnPressed:(id)arg1;
@property(retain, nonatomic) NSView *dropTargetView;
- (id)nibName;
- (void)viewLoaded;
- (id)initWithTarget:(const struct TFENode *)arg1;

@end

