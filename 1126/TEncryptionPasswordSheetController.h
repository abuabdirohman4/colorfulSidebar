//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString, TBaseEncryptionPasswordViewController;

@interface TEncryptionPasswordSheetController : NSWindowController <NSWindowDelegate>
{
    struct TNSRef<NSWindow, void> _parentWindow;
    struct TFENode _volumeNode;
    int _passwordType;
    TBaseEncryptionPasswordViewController *_viewController;
}

+ (_Bool)showingForVolumeNode:(const struct TFENode *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)aboutToTearDown;
- (id)initWithParentWindow:(id)arg1 volumeNode:(const struct TFENode *)arg2 forEncryption:(_Bool)arg3 passwordType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
