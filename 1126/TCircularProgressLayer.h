//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TLayer.h"

@class NSColor;

@interface TCircularProgressLayer : TLayer
{
    double _endAngle;
    double _animationDuration;
    struct TNSRef<NSColor, void> _fillColor;
    _Bool _progressAnimationCompleted;
    function_b1fce659 _progressDidCompleteHandler;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property double endAngle; // @synthesize endAngle=_endAngle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callProgressAnimationDidCompleteHandlerIfNeeded;
@property(readonly, nonatomic) _Bool isProgressAnimationCompleted; // @dynamic isProgressAnimationCompleted;
- (void)setProgressDidCompleteHandler:(const function_b1fce659 *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
@property(retain, nonatomic) NSColor *fillColor; // @dynamic fillColor;
@property(nonatomic) double fractionComplete; // @dynamic fractionComplete;
- (void)setEndAngleAnimated:(double)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

