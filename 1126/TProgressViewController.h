//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class TProgressStatusViewController, TProgressView;

@interface TProgressViewController : TViewController
{
    struct TNSRef<TProgressStatusViewController, void> _statusViewController;
}

+ (id)keyPathsForValuesAffectingIsShowingStatus;
+ (id)keyPathsForValuesAffectingSeparatorHidden;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 withInitialKeyView:(id)arg2;
@property(readonly, nonatomic) _Bool isShowingStatus; // @dynamic isShowingStatus;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @dynamic separatorHidden;
@property(readonly, retain, nonatomic) TProgressStatusViewController *statusViewController; // @dynamic statusViewController;
@property(readonly, retain, nonatomic) TProgressView *progressView;
- (void)dealloc;
- (void)initCommon;
- (id)init;
- (id)initWithStatusKind:(int)arg1;

@end

