//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TLabelView.h"

@class TFakeTagsMenuItemView;

@interface TLabelViewForMenu : TLabelView
{
    int _validationCount;
    struct TKeyValueBinder _hoveredPartBinder;
    TFakeTagsMenuItemView *_fakeTagsMenuItem;
    struct TNSRef<NSTrackingArea, void> _trackingArea;
    long long _hoveredPart;
}

+ (id)titleFieldFromMenuItem:(id)arg1;
+ (id)labelViewFromMenuItem:(id)arg1;
+ (id)labelViewForMenu:(id)arg1;
@property(nonatomic) long long hoveredPart; // @synthesize hoveredPart=_hoveredPart;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gumdropValueChangedInMenu:(id)arg1;
- (void)gumdropFavoriteTagChosenInMenu:(id)arg1;
- (_Bool)favoriteTagWillRemove:(short)arg1;
- (void)setForApplyingFavoriteTags:(_Bool)arg1;
- (int)validationCount;
- (void)bumpValidationCount;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

@end

