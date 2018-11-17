//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPropertyValueExtractor.h"

@interface TKindAndSizePropertyValueExtractor : IPropertyValueExtractor
{
    struct TNSRef<IPropertyValueExtractor, void> _kindExtractor;
    struct TNSRef<IPropertyValueExtractor, void> _sizeExtractor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)defaultValue;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (void)flush;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)prefetchValueOnSecondaryThread:(const struct TFENodeVector *)arg1 cancelled:(const struct atomic<bool> *)arg2;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (id)init;

@end

