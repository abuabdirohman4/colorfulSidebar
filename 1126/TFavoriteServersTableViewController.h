//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TTableViewController.h"

@class TFavoriteServersTableViewDataSource;

@interface TFavoriteServersTableViewController : TTableViewController
{
    struct TKeyValueObserver _dataSourceChangedObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleDoubleClick:(id)arg1;
- (void)dataSourceChanged;
- (void)setView:(id)arg1;
@property(readonly, retain, nonatomic) TFavoriteServersTableViewDataSource *favoritesDataSource; // @dynamic favoritesDataSource;
- (Class)dataSourceClass;
- (void)dealloc;
- (void)viewLoaded;

@end
