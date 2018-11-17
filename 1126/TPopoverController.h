//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPopoverDelegate-Protocol.h"

@class NSAppearance, NSString, TPopover, TPopoverContentViewController;

@interface TPopoverController : NSObject <NSPopoverDelegate>
{
    TPopoverContentViewController *_contentViewController;
    TPopover *_popover;
    struct TNSRef<NSArray, void> _topLevelNibObjects;
    _Bool _releasedWhenClosed;
}

@property(nonatomic) _Bool releasedWhenClosed; // @synthesize releasedWhenClosed=_releasedWhenClosed;
@property(readonly, retain, nonatomic) TPopover *popover; // @synthesize popover=_popover;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double width; // @dynamic width;
@property(retain, nonatomic) NSAppearance *appearance;
@property(nonatomic) long long behavior; // @dynamic behavior;
@property(readonly, nonatomic) _Bool isShown; // @dynamic isShown;
- (void)popoverWillClose:(id)arg1;
- (void)closePopover;
- (void)showPopoverRelativeToRect:(struct CGRect)arg1 relativeView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)removeSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)aboutToTearDown;
- (void)dealloc;
- (id)init;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

