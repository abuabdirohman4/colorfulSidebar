//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TProgressWindowController;

@interface TGenericProgressController : NSObject
{
    struct TNSRef<TProgressWindowController, void> _progressWindowController;
    struct map<TNSRef<NSProgress, void>, TNSRef<TProgressViewController, void>, std::__1::less<TNSRef<NSProgress, void>>, std::__1::allocator<std::__1::pair<const TNSRef<NSProgress, void>, TNSRef<TProgressViewController, void>>>> _progressToProgressViewControllerMap;
    struct map<TNSRef<NSProgress, void>, std::__1::vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>>, std::__1::less<TNSRef<NSProgress, void>>, std::__1::allocator<std::__1::pair<const TNSRef<NSProgress, void>, std::__1::vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>>>>> _progressToObserversMap;
    _Bool _shouldShowProgressWindowWhenProgressIsAdded;
    struct TNotificationCenterObserver _windowWillCloseObserver;
    _Bool _windowWillCloseObserverIsObserving;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)messageStringForProgress:(id)arg1;
- (void)fractionCompletedChanged:(id)arg1;
- (void)localizedAdditionalDescriptionChanged:(id)arg1;
- (void)localizedDescriptionChanged:(id)arg1;
- (void)removeProgress:(id)arg1;
- (void)addProgress:(id)arg1 progressViewController:(id)arg2 toEnd:(_Bool)arg3;
- (void)configureProgressViewControllers;
- (void)addProgressView:(id)arg1 toEnd:(_Bool)arg2;
- (void)showProgressWindow;
- (void)windowWillClose:(id)arg1;
- (void)createProgressWindowControllerIfNeeded;
@property(readonly, nonatomic) int progressWindowKind;
@property(readonly, nonatomic) _Bool canCloseProgressWindow;
@property(readonly, retain, nonatomic) TProgressWindowController *progressWindowController;

@end

