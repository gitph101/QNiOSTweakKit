//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KxMovieGLRenderer.h"

@interface KxMovieGLRenderer_YUV : NSObject <KxMovieGLRenderer>
{
    int _uniformSamplers[3];
    unsigned int _textures[3];
}

- (void)dealloc;
- (_Bool)prepareRender;
- (void)setFrame:(id)arg1;
- (void)resolveUniforms:(unsigned int)arg1;
- (id)fragmentShader;
- (_Bool)isValid;

@end

